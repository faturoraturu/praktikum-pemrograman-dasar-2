#include <iostream>
using namespace std;
int main(){
    double arus;
    for (int i=1;i<=10 ;i++){
        cout <<"Pembacaan ke=" << i <<endl ;
        cout << "Masukkan arus(ampere): ";
        cin >> arus;
        if (arus > 15){
            cout << "KRITIS :Sistem dimatikan.\n";
            break;//keluar dari loop jika arus melebihi 15 ampere
        }
            cout << "arus normal.\n\n";
    }
            cout << "Monitoring selesai.\n";
            return 0;
}