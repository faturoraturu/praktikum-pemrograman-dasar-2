#include <iostream> 
using namespace std;
union Data {
    int angka;
    float desimal;
};
int main (){
    Data d;
    d.angka = 100;
    cout << "angka : " << d.angka << endl;
    d.desimal = 3.14;
    cout << "angka setelah ditimpa (d.angka) : " << d.angka << endl;
    cout << "nilai d.desimal : " << d.desimal << endl ;
    return 0;
} 