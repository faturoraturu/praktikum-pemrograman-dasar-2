#include <iostream>
using namespace std;
int main() {
    
    int suhu;
    
    cout << "Masukkan suhu CPU: ";
    cin >> suhu;
    
    for (; suhu >= 80;) {
        cout << "PERINGATAN: Suhu tinggi (" << suhu << "°C)\n";
        cout << "Masukkan suhu terbaru: ";
        cin >> suhu;
    }
    
    cout << "Suhu sudah aman. Monitoring dihentikan.\n";
    
    return 0;
}