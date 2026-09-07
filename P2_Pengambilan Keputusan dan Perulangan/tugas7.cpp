#include <iostream>
using namespace std;
int main(){
    int suhu;
    do {
        cout << "Masukkan suhu CPU : ";
        cin >> suhu;
        if (suhu >= 80){
            cout << "PERINGATAN : Suhu Tinggi (" << suhu << "°C)\n";
        }
    } while (suhu >= 80);
    cout << "Suhu sudah aman. Monitoring dihentikan.\n";
    return 0;
}