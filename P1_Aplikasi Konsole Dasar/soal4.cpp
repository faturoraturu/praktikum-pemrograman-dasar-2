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
    string namapanggilan;

    cout << "Masukkan nama panggilan (1 kata): ";
    cin >> namapanggilan;

    // =========================
    // 3. INPUT TEKS DENGAN SPASI
    // =========================
    string namalengkap;

    cout << "Masukkan nama lengkap: ";
    getline(cin, namalengkap); // Ini akan membaca seluruh baris termasuk spasi

    // =========================
    // OUTPUT HASIL
    // =========================
    cout << "\n===== DATA ANDA =====\n";
    cout << "Umur           : " << umur << " tahun\n";
    cout << "Tinggi         : " << tinggi << " cm\n";
    cout << "Nama Panggilan : " << namapanggilan << "\n";
    cout << "Nama Lengkap   : " << namalengkap << "\n";

    return 0;
}