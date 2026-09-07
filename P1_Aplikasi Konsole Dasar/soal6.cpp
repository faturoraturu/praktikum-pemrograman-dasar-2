#include <iostream>
#include <string>
using namespace std;

int main() {
    int umur;
    double ipk;
    char grade;
    bool aktif;

    string nama;  
    cout << "Masukkan nama lengkap: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;
    cout << "Masukkan IPK: ";
    cin >> ipk;
    cout << "Masukkan grade huruf: ";
    cin >> grade;
    cout << "Status aktif (1=ya, 0=tidak): ";
    cin >> aktif ; 

    cout << "\n===== DATA MAHASISWA =====\n";
    cout << "Nama   : " << nama << endl;
    cout << "Umur   : " << umur << endl;
    cout << "IPK    : " << ipk << endl;
    cout << "Grade  : " << grade << endl;
    cout << "Aktif  : " << aktif << endl;
    return 0;
}