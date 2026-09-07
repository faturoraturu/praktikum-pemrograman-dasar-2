// ImageProcessor.h
// ============================================================
// OpenCV Image Processing dengan Visual Studio
// Menggunakan: enum, union, bit-field, typedef, class, method
// ============================================================

#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

// ============================================================
// 1. TYPEDEF — Alias tipe untuk kemudahan penulisan
// ============================================================
typedef unsigned char   uchar8;
typedef unsigned int    uint32;
typedef cv::Mat         ImageMatrix;
typedef std::string     FilePath;

// ============================================================
// 2. ENUM — Mode filter dan tipe color space
// ============================================================
enum class FilterMode {
    NONE        = 0,
    BLUR        = 1,
    SHARPEN     = 2,
    EDGE_DETECT = 3,
    EMBOSS      = 4
};

enum class ColorSpace {
    BGR       = 0,
    GRAYSCALE = 1,
    HSV       = 2,
    LAB       = 3
};

enum class ThresholdType {
    BINARY     = cv::THRESH_BINARY,
    BINARY_INV = cv::THRESH_BINARY_INV,
    OTSU       = cv::THRESH_OTSU
};

// ============================================================
// 3. UNION — Menyimpan nilai piksel BGRA secara fleksibel
//    Bisa diakses sebagai 4 channel terpisah ATAU 1 nilai uint32
// ============================================================
union PixelValue {
    uint32 raw;          // Akses semua channel sekaligus (32-bit)
    struct {
        uchar8 blue;     // Channel Blue  (8-bit)
        uchar8 green;    // Channel Green (8-bit)
        uchar8 red;      // Channel Red   (8-bit)
        uchar8 alpha;    // Channel Alpha (8-bit)
    } channel;
};

// ============================================================
// 4. BIT-FIELD — Flag kontrol operasi (hemat memori)
//    Setiap flag hanya menggunakan 1 bit
// ============================================================
struct ProcessingFlags {
    uint32 enableResize    : 1;  // Bit 0 — Aktifkan resize
    uint32 enableFlip      : 1;  // Bit 1 — Aktifkan flip
    uint32 enableThreshold : 1;  // Bit 2 — Aktifkan threshold
    uint32 enableHistEq    : 1;  // Bit 3 — Aktifkan histogram equalization
    uint32 enableDenoise   : 1;  // Bit 4 — Aktifkan denoising
    uint32 saveOutput      : 1;  // Bit 5 — Simpan hasil ke file
    uint32 showWindow      : 1;  // Bit 6 — Tampilkan jendela preview
    uint32 reserved        : 25; // Bit 7-31 — Cadangan
};

// ============================================================
// 5. CLASS + METHOD — Kelas utama Image Processor
// ============================================================
class ImageProcessor {
private:
    ImageMatrix     m_source;       // Gambar asli
    ImageMatrix     m_result;       // Gambar hasil proses
    FilePath        m_inputPath;    // Path file input
    FilePath        m_outputPath;   // Path file output
    FilterMode      m_filterMode;   // Mode filter aktif
    ColorSpace      m_colorSpace;   // Color space aktif
    ProcessingFlags m_flags;        // Bit-field flags
    int             m_blurKernel;   // Ukuran kernel blur
    double          m_threshold;    // Nilai threshold

public:
    // ---- Constructor ----
    ImageProcessor()
        : m_filterMode(FilterMode::NONE),
          m_colorSpace(ColorSpace::BGR),
          m_blurKernel(5),
          m_threshold(128.0)
    {
        // Inisialisasi semua flag ke 0 menggunakan memset
        memset(&m_flags, 0, sizeof(ProcessingFlags));
        m_flags.showWindow = 1; // Default: tampilkan window
    }

    // ---- Destructor ----
    ~ImageProcessor() {
        cv::destroyAllWindows();
    }

    // ---- METHOD: Load gambar dari file ----
    bool loadImage(const FilePath& path) {
        m_inputPath = path;
        m_source = cv::imread(path, cv::IMREAD_COLOR);

        if (m_source.empty()) {
            std::cerr << "[ERROR] Gagal memuat gambar: " << path << std::endl;
            return false;
        }

        m_result = m_source.clone();
        std::cout << "[INFO] Gambar dimuat: " << path
                  << " [" << m_source.cols << "x" << m_source.rows << "]" << std::endl;
        return true;
    }

    // ---- METHOD: Set color space konversi ----
    void setColorSpace(ColorSpace cs) {
        m_colorSpace = cs;

        switch (cs) {
            case ColorSpace::GRAYSCALE:
                cv::cvtColor(m_source, m_result, cv::COLOR_BGR2GRAY);
                std::cout << "[INFO] ColorSpace: GRAYSCALE" << std::endl;
                break;
            case ColorSpace::HSV:
                cv::cvtColor(m_source, m_result, cv::COLOR_BGR2HSV);
                std::cout << "[INFO] ColorSpace: HSV" << std::endl;
                break;
            case ColorSpace::LAB:
                cv::cvtColor(m_source, m_result, cv::COLOR_BGR2Lab);
                std::cout << "[INFO] ColorSpace: LAB" << std::endl;
                break;
            default:
                m_result = m_source.clone();
                std::cout << "[INFO] ColorSpace: BGR (default)" << std::endl;
                break;
        }
    }

    // ---- METHOD: Set mode filter ----
    void setFilter(FilterMode mode, int kernelSize = 5) {
        m_filterMode = mode;
        m_blurKernel = (kernelSize % 2 == 0) ? kernelSize + 1 : kernelSize;
        applyFilter();
    }

    // ---- METHOD: Set processing flags menggunakan bit-field ----
    void setFlags(bool resize, bool flip, bool threshold,
                  bool histEq, bool denoise, bool save, bool show) {
        m_flags.enableResize    = resize    ? 1 : 0;
        m_flags.enableFlip      = flip      ? 1 : 0;
        m_flags.enableThreshold = threshold ? 1 : 0;
        m_flags.enableHistEq    = histEq    ? 1 : 0;
        m_flags.enableDenoise   = denoise   ? 1 : 0;
        m_flags.saveOutput      = save      ? 1 : 0;
        m_flags.showWindow      = show      ? 1 : 0;
    }

    // ---- METHOD: Analisis piksel menggunakan union PixelValue ----
    PixelValue getPixelAt(int x, int y) const {
        PixelValue pv;
        pv.raw = 0;

        if (m_source.empty() || x >= m_source.cols || y >= m_source.rows)
            return pv;

        // Jika gambar 3-channel (BGR)
        if (m_source.channels() == 3) {
            cv::Vec3b bgr = m_source.at<cv::Vec3b>(y, x);
            pv.channel.blue  = bgr[0];
            pv.channel.green = bgr[1];
            pv.channel.red   = bgr[2];
            pv.channel.alpha = 255;
        }
        // Jika gambar grayscale
        else if (m_source.channels() == 1) {
            uchar8 gray = m_source.at<uchar8>(y, x);
            pv.channel.blue  = gray;
            pv.channel.green = gray;
            pv.channel.red   = gray;
            pv.channel.alpha = 255;
        }

        return pv;
    }

    // ---- METHOD: Cetak info piksel ----
    void printPixelInfo(int x, int y) const {
        PixelValue pv = getPixelAt(x, y);
        std::cout << "[PIXEL (" << x << "," << y << ")] "
                  << "RAW=0x" << std::hex << pv.raw << std::dec
                  << " | B=" << (int)pv.channel.blue
                  << " G=" << (int)pv.channel.green
                  << " R=" << (int)pv.channel.red
                  << " A=" << (int)pv.channel.alpha << std::endl;
    }

    // ---- METHOD: Jalankan pipeline berdasarkan flags ----
    void process(const FilePath& outputPath = "output.jpg") {
        m_outputPath = outputPath;

        if (m_source.empty()) {
            std::cerr << "[ERROR] Tidak ada gambar yang dimuat!" << std::endl;
            return;
        }

        // Resize — berdasarkan bit-field flag
        if (m_flags.enableResize) {
            cv::resize(m_result, m_result, cv::Size(640, 480));
            std::cout << "[PROC] Resize -> 640x480" << std::endl;
        }

        // Flip horizontal — berdasarkan bit-field flag
        if (m_flags.enableFlip) {
            cv::flip(m_result, m_result, 1);
            std::cout << "[PROC] Flip horizontal" << std::endl;
        }

        // Histogram Equalization — berdasarkan bit-field flag
        if (m_flags.enableHistEq) {
            applyHistogramEqualization();
        }

        // Denoising — berdasarkan bit-field flag
        if (m_flags.enableDenoise) {
            cv::fastNlMeansDenoising(m_result, m_result, 10, 7, 21);
            std::cout << "[PROC] Denoising applied" << std::endl;
        }

        // Threshold — berdasarkan bit-field flag
        if (m_flags.enableThreshold) {
            applyThreshold(m_threshold, ThresholdType::BINARY);
        }

        // Tampilkan window
        if (m_flags.showWindow) {
            cv::imshow("Source", m_source);
            cv::imshow("Result", m_result);
            std::cout << "[INFO] Tekan sembarang tombol untuk menutup..." << std::endl;
            cv::waitKey(0);
        }

        // Simpan output
        if (m_flags.saveOutput) {
            cv::imwrite(m_outputPath, m_result);
            std::cout << "[INFO] Disimpan ke: " << m_outputPath << std::endl;
        }
    }

    // ---- METHOD: Getter untuk info gambar ----
    int getWidth()    const { return m_source.cols; }
    int getHeight()   const { return m_source.rows; }
    int getChannels() const { return m_source.channels(); }

    // ---- METHOD: Print status semua flag (bit-field) ----
    void printFlags() const {
        std::cout << "=== Processing Flags ===" << std::endl;
        std::cout << "  enableResize    : " << m_flags.enableResize    << std::endl;
        std::cout << "  enableFlip      : " << m_flags.enableFlip      << std::endl;
        std::cout << "  enableThreshold : " << m_flags.enableThreshold << std::endl;
        std::cout << "  enableHistEq    : " << m_flags.enableHistEq    << std::endl;
        std::cout << "  enableDenoise   : " << m_flags.enableDenoise   << std::endl;
        std::cout << "  saveOutput      : " << m_flags.saveOutput      << std::endl;
        std::cout << "  showWindow      : " << m_flags.showWindow      << std::endl;
    }

private:
    // ---- PRIVATE METHOD: Terapkan filter berdasarkan FilterMode enum ----
    void applyFilter() {
        if (m_result.empty()) return;

        switch (m_filterMode) {
            case FilterMode::BLUR: {
                cv::GaussianBlur(m_result, m_result,
                                 cv::Size(m_blurKernel, m_blurKernel), 0);
                std::cout << "[FILTER] Gaussian Blur (kernel=" << m_blurKernel << ")" << std::endl;
                break;
            }
            case FilterMode::SHARPEN: {
                // Kernel sharpening 3x3
                cv::Mat kernel = (cv::Mat_<float>(3,3) 
                     0, -1,  0,
                    -1,  5, -1,
                     0, -1,  0);
                cv::filter2D(m_result, m_result, -1, kernel);
                std::cout << "[FILTER] Sharpen" << std::endl;
                break;
            }
            case FilterMode::EDGE_DETECT: {
                ImageMatrix gray, edges;
                cv::cvtColor(m_result, gray, cv::COLOR_BGR2GRAY);
                cv::Canny(gray, edges, 100, 200);
                cv::cvtColor(edges, m_result, cv::COLOR_GRAY2BGR);
                std::cout << "[FILTER] Edge Detection (Canny)" << std::endl;
                break;
            }
            case FilterMode::EMBOSS: {
                // Kernel emboss
                cv::Mat kernel = (cv::Mat_<float>(3,3) 
                    -2, -1,  0,
                    -1,  1,  1,
                     0,  1,  2);
                cv::filter2D(m_result, m_result, -1, kernel);
                std::cout << "[FILTER] Emboss" << std::endl;
                break;
            }
            default:
                std::cout << "[FILTER] None" << std::endl;
                break;
        }
    }

    // ---- PRIVATE METHOD: Histogram equalization ----
    void applyHistogramEqualization() {
        if (m_result.channels() == 1) {
            cv::equalizeHist(m_result, m_result);
        } else {
            // Konversi ke YCrCb, equalize hanya channel Y
            ImageMatrix ycrcb;
            cv::cvtColor(m_result, ycrcb, cv::COLOR_BGR2YCrCb);
            std::vector<ImageMatrix> channels;
            cv::split(ycrcb, channels);
            cv::equalizeHist(channels[0], channels[0]);
            cv::merge(channels, ycrcb);
            cv::cvtColor(ycrcb, m_result, cv::COLOR_YCrCb2BGR);
        }
        std::cout << "[PROC] Histogram Equalization applied" << std::endl;
    }

    // ---- PRIVATE METHOD: Threshold ----
    void applyThreshold(double value, ThresholdType type) {
        ImageMatrix gray;
        if (m_result.channels() > 1)
            cv::cvtColor(m_result, gray, cv::COLOR_BGR2GRAY);
        else
            gray = m_result.clone();

        int cvType = (type == ThresholdType::OTSU)
            ? cv::THRESH_BINARY | cv::THRESH_OTSU
            : static_cast<int>(type);

        cv::threshold(gray, m_result, value, 255, cvType);
        std::cout << "[PROC] Threshold applied (value=" << value << ")" << std::endl;
    }
};


// ============================================================
// main.cpp — Program utama
// ============================================================
int main() {
    std::cout << "====================================" << std::endl;
    std::cout << "  OpenCV Image Processor Demo       " << std::endl;
    std::cout << "====================================" << std::endl;

    // Buat objek ImageProcessor (class)
    ImageProcessor processor;

    // Set flags menggunakan bit-field
    //              resize  flip   thresh  histEq  denoise  save   show
    processor.setFlags(true, false, false, true,  false,   true,  true);
    processor.printFlags();

    // Load gambar
    if (!processor.loadImage("test.jpg")) {
        std::cerr << "Pastikan file 'test.jpg' ada di direktori yang sama." << std::endl;
        return -1;
    }

    // Cetak info dimensi gambar
    std::cout << "[INFO] Dimensi: "
              << processor.getWidth() << "x"
              << processor.getHeight()
              << " | Channels: " << processor.getChannels() << std::endl;

    // Analisis piksel menggunakan union PixelValue
    processor.printPixelInfo(100, 100);
    processor.printPixelInfo(200, 150);

    // Set color space (enum ColorSpace)
    processor.setColorSpace(ColorSpace::BGR);

    // Set filter (enum FilterMode)
    processor.setFilter(FilterMode::SHARPEN);

    // Jalankan pipeline
    processor.process("output_result.jpg");

    std::cout << "\n[DONE] Proses selesai!" << std::endl;
    return 0;
}