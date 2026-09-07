#include <iostream>
using namespace std;
union Data {
    int angka ;
    float desimal;   
};
int main (){
    Data d;
    cout << "alamat angka :" <<&d.angka << endl;
    cout << "alamat desimal :" <<&d.desimal << endl;
}