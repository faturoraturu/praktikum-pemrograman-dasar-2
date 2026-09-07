#include <iostream>
using namespace std;
float hitungRata(int n1,int n2,int n3){
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
    cout << "n3 : " << n3 << endl;
    float jumlah = n1 + n2 + n3 ;
    cout << "Jumlah: " << jumlah << endl;
    float rata = jumlah/3 ;
    cout << " Rata Sementara : " << rata << endl;
    return rata;
}
int main(){
    int a = 80 , b= 85 , c=90 ;
    float hasil = hitungRata(a,b,c);
    cout << " Rata-rata akhir : " << hasil << endl;
    return 0;
}