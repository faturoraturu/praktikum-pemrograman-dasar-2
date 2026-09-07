#include <iostream>
#include <string>
using namespace std;

int main() {

    // =========================
    // 1. INPUT ANGKA
    // =========================
    int umur;
    double tinggi;

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    // =========================
    // 2. INPUT TEKS SATU KATA
    // =========================
    string namaPanggilan;

    cout << "Masukkan nama panggilan (1 kata): ";
    cin >> namaPanggilan;

    // =========================
    // 3. INPUT TEKS DENGAN SPASI
    // =========================

    // Penting! Bersihkan sisa newline dari input sebelumnya
    cin.ignore();

    string namaLengkap;

    cout << "Masukkan nama lengkap: ";
    getline(cin, namaLengkap);

    // =========================
    // OUTPUT HASIL
    // =========================
    cout << "\n===== DATA ANDA =====\n";
    cout << "Umur           : " << umur << " tahun\n";
    cout << "Tinggi         : " << tinggi << " cm\n";
    cout << "Nama Panggilan : " << namaPanggilan << "\n";
    cout << "Nama Lengkap   : " << namaLengkap << "\n";

    return 0;
}