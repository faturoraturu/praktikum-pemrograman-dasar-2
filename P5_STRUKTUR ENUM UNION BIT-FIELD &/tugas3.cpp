#include <iostream>
using namespace std;
union Data {
    int angka ;
    float desimal ;
};
int main (){
    Data d ;
    cout << "Alamat angka : " << &d.angka << endl;
    cout<< "Alamat Desimal : " << &d.desimal << endl;
    return 0;
}
