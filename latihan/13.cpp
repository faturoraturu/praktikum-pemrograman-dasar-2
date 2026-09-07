#include <iostream>
using namespace std;
union Data {
    int angka ;
    float desimal ;
};
int main (){
    Data d;
    d.angka = 100;
    int simpan = d.angka;
    cout << "angka 1 :" << d.angka << endl;
    d.desimal = 3.14;
    cout << "desimal : " << d.desimal << endl;

    cout << "angka setelah :" << simpan << endl;
    cout << "desimal setelah :"<<d.desimal<< endl;
}