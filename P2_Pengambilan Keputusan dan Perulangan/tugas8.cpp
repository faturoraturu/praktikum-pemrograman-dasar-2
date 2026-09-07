#include <iostream>
using namespace std;
int main(){
    int suhu ;
    double total =0;
    for (int i=1 ; i<=5; i++) {
        cout<< "Pembacaan ke-"<<i<<endl;
        cout<< "Masukkan suhu CPU: ";
        cin>> suhu ;
        total += suhu;
        if (suhu >= 90)
        {
            cout << "PERINGATAN : Suhu  KRITIS!\n";
        }
        cout << endl;
    }
    cout << "Rata-rata suhu = "<< total /5 << endl ;
    return 0 ;
}