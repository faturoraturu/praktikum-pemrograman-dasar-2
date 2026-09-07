#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdint>

// 1. TYPEDEF
// Membuat alias untuk tipe data OpenCV agar lebih deskriptif
typedef cv::Mat ImageFrame;
typedef cv::Point2f Point2D;

// 2. ENUM
// Mendefinisikan tipe target yang ingin dideteksi oleh sistem
enum TargetColor {
    TARGET_ORANGE,
    TARGET_BLUE,
    TARGET_UNKNOWN
};

// 3. BIT-FIELD
// Mengoptimalkan penggunaan memori untuk status sistem (sangat berguna jika data akan dikirim via telemetri ke flight controller)
struct VisionStatus {
    uint8_t is_camera_active : 1; // 1 bit: Kamera menyala/tidak
    uint8_t target_locked    : 1; // 1 bit: Target ditemukan dan dikunci
    uint8_t payload_ready    : 1; // 1 bit: Siap untuk eksekusi/drop
    uint8_t error_flag       : 1; // 1 bit: Terjadi error
    uint8_t reserved         : 4; // 4 bit: Cadangan untuk future use (total 8 bit / 1 byte)
};

// 4. UNION
// Memungkinkan representasi data warna dalam format integer 32-bit (Hex) atau per channel (BGRA) pada lokasi memori yang sama
union ColorData {
    uint32_t hexValue;
    struct {
        uint8_t b; // Blue
        uint8_t g; // Green
        uint8_t r; // Red
        uint8_t a; // Alpha
    } channels;
};

// 5. CLASS
// Merangkum data dan fungsionalitas dalam satu objek
class PayloadVisionTracker {
private:
    TargetColor currentTarget;
    VisionStatus status;
    ImageFrame lastFrame;

public:
    // Constructor
    PayloadVisionTracker() {
        status = {0}; // Reset semua bit status ke 0
        status.is_camera_active = 1;
        currentTarget = TARGET_UNKNOWN;
    }

    // 6. METHOD: Mengatur target yang dicari
    void setTargetMode(TargetColor color) {
        currentTarget = color;
        std::cout << "Target diubah. Memulai pelacakan untuk mode: " << color << std::endl;
    }

    // 6. METHOD: Memproses frame gambar untuk deteksi
    void processFrame(const ImageFrame& frame) {
        if (frame.empty()) {
            status.error_flag = 1;
            std::cerr << "Error: Frame kosong!" << std::endl;
            return;
        }

        lastFrame = frame.clone();
        ImageFrame hsvFrame, mask;

        // Konversi BGR ke HSV untuk deteksi warna yang lebih stabil terhadap cahaya
        cv::cvtColor(lastFrame, hsvFrame, cv::COLOR_BGR2HSV);

        // Menentukan range warna berdasarkan enum TargetColor
        if (currentTarget == TARGET_ORANGE) {
            // Range warna oranye pada OpenCV (H: 0-20)
            cv::inRange(hsvFrame, cv::Scalar(5, 150, 150), cv::Scalar(15, 255, 255), mask);
        } else if (currentTarget == TARGET_BLUE) {
            // Range warna biru pada OpenCV (H: 100-130)
            cv::inRange(hsvFrame, cv::Scalar(100, 150, 0), cv::Scalar(140, 255, 255), mask);
        }

        // Mencari kontur objek yang terdeteksi
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

        if (!contours.empty()) {
            // Asumsi kontur terbesar adalah target utama
            double maxArea = 0;
            int maxAreaIdx = -1;
            for (size_t i = 0; i < contours.size(); i++) {
                double area = cv::contourArea(contours[i]);
                if (area > maxArea) {
                    maxArea = area;
                    maxAreaIdx = i;
                }
            }

            if (maxArea > 500) { // Threshold ukuran target
                status.target_locked = 1;
                cv::Rect boundingBox = cv::boundingRect(contours[maxAreaIdx]);
                cv::rectangle(lastFrame, boundingBox, cv::Scalar(0, 255, 0), 2);
                std::cout << "Target Terkunci pada koordinat X: " << boundingBox.x << " Y: " << boundingBox.y << std::endl;
            } else {
                status.target_locked = 0;
            }
        } else {
            status.target_locked = 0;
        }

        // Tampilkan hasil
        cv::imshow("Vision Tracker", lastFrame);
    }
};

int main() {
    // Inisialisasi kamera (0 untuk webcam bawaan)
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Gagal membuka kamera." << std::endl;
        return -1;
    }

    // Instansiasi objek dari kelas PayloadVisionTracker
    PayloadVisionTracker tracker;
    
    // Setel mode ke deteksi target oranye
    tracker.setTargetMode(TARGET_ORANGE);

    ImageFrame frame;
    
    // Contoh penggunaan Union untuk mendefinisikan warna marker
    ColorData markerColor;
    markerColor.channels.r = 255;
    markerColor.channels.g = 165;
    markerColor.channels.b = 0;
    // markerColor.hexValue kini otomatis memegang nilai representasi 32-bit dari warna tersebut

    std::cout << "Tekan 'q' untuk keluar..." << std::endl;

    while (true) {
        cap >> frame; 
        
        // Memanggil method pemrosesan
        tracker.processFrame(frame);

        // Keluar jika tombol 'q' ditekan
        if (cv::waitKey(30) == 'q') {
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}