#include <iostream>
using namespace std;

int main() {
    // Judul Program
    cout << "PROGRAM CEK ARUS LISTRIK" << endl;
    cout << "========================" << endl;
    
    // Deklarasi variabel untuk arus listrik
    float arus;
    
    // Input Arus (A)
    cout << "Masukkan nilai arus (Ampere): ";
    cin >> arus;
    
    // Validasi input (cek apakah input berupa angka)
    if (cin.fail()) {
        cout << "Error: Masukkan angka yang valid!" << endl;
    } else {
        // Decision: Arus > 10 A?
        if (arus > 10) {
            // Jika TRUE (Arus > 10 A)
            cout << "Overload!" << endl;
        } else {
            // Jika FALSE (Arus <= 10 A)
            cout << "Arus Normal" << endl;
        }
    }
    
    // SELESAI
    cout << "\nProgram selesai." << endl;
    
    return 0;
}