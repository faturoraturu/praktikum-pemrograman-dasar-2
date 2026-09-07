#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan data mahasiswa
    string nama, status;
    int nilai;
    int jumlahLulus = 0;
    int jumlahTidakLulus = 0;
    char ulang;
    
    cout << "PROGRAM ANALISIS NILAI MAHASISWA" << endl;
    cout << "=================================" << endl;
    
    // Perulangan untuk input data mahasiswa
    do {
        // Input data mahasiswa
        cout << "\nMasukkan nama mahasiswa: ";
         // Membersihkan buffer
        getline(cin >> ws, nama);
        
        cout << "Masukkan nilai mahasiswa: ";
        cin >> nilai;
        
        // PERCABANGAN 1: Menentukan status lulus atau tidak
        if (nilai >= 60) {
            status = "LULUS";
            jumlahLulus++;
            
            // PERCABANGAN 2: Penghargaan khusus untuk nilai tinggi
            if (nilai > 90) {
                cout << "\nSELAMAT! Anda mendapatkan penghargaan mahasiswa berprestasi!" << endl;
            }
        } else {
            status = "TIDAK LULUS";
            jumlahTidakLulus++;
        }
        
        // PERCABANGAN 3: Menampilkan detail berdasarkan nilai
        if (nilai > 20) {
            // Bagian ini akan dieksekusi untuk nilai di atas 20, menampilkan detail lengkap
            cout << "\n--- DETAIL MAHASISWA ---" << endl;
            cout << "Nama   : " << nama << endl;
            cout << "Nilai  : " << nilai << endl;
            cout << "Status : " << status << endl;
        } else {
            // Bagian ini akan dieksekusi untuk nilai 0-20, melewati detail lengkap
            cout << "\n--- DATA MAHASISWA NILAI RENDAH ---" << endl;
            cout << "Mahasiswa dengan nilai " << nilai << " (di bawah 21)" << endl;
            cout << "Detail lengkap tidak ditampilkan." << endl;
        }
        
        cout << "================================" << endl;
        
        // Input untuk mengulangi proses
        cout << "\nInput data lagi? (Y/N): ";
        cin >> ulang;
        
    } while (ulang == 'Y' || ulang == 'y'); // Kondisi perulangan
    
    // Menampilkan ringkasan hasil setelah semua data mahasiswa diproses
    cout << "\n\n========== RINGKASAN ==========" << endl;
    cout << "Jumlah mahasiswa LULUS        : " << jumlahLulus << endl;
    cout << "Jumlah mahasiswa TIDAK LULUS  : " << jumlahTidakLulus << endl;
    cout << "Total mahasiswa yang diproses : " << (jumlahLulus + jumlahTidakLulus) << endl;
    cout << "=================================" << endl;
    
    cout << "\nProgram selesai. Terima kasih!" << endl;
    
    return 0;
}