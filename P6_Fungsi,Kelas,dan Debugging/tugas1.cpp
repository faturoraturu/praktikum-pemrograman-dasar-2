#include <iostream>
using namespace std;
int main (){
    int harga1 = 10000,harga2 =20000,harga3=30000,harga4=40000;
    int total1 = harga1 + harga2;
    if (total1 > 25000) {
        total1= total1-(total1*10/100);

    }
    cout<< "Total 1: "<< total1 <<endl;
    
    int total2= harga2 + harga3;
    if (total2 > 25000 ) {
        total2 = total2 -(total2* 10/100 );
    }
    cout << " Total2 : "<< total2 << endl ;

    int total3 = harga3 + harga4;
    if (total3 > 25000) {
        total3 = total3 - (total3 * 10 /100 );
    }
    cout << " Total 3 : " << total3 << endl;
    return 0;
}