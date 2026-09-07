#include <iostream>
using namespace std;
int main(){
    string pasword;
    do{
        cout << "Masukkan pasword admin: ";
        cin >> pasword;
        if (pasword != "admin123"){
            cout << "Pasword salah, coba lagi.\n";
        }
    }while (pasword != "admin123");
    cout << "Login berhasil. Sistem aktif.\n";
return 0;
}