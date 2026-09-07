#include <iostream>
using namespace std;
 int hitungTotal(int a,int b){
    int total = a + b ;
    if (total > 25000) {
        total = total -(total * 10 /100);

    }
    return total;
 }
 int main()
 {
    int harga1 = 10000 , harga2 = 20000 , harga3 = 30000 , harga4=40000;
    cout << "Total 1 :" << hitungTotal(harga1,harga2)<<endl;
    cout << "Total 2 : "<< hitungTotal(harga2,harga3)<<endl;
    cout << "Total 3 : "<< hitungTotal(harga3,harga4)<<endl;
    return 0;
 }