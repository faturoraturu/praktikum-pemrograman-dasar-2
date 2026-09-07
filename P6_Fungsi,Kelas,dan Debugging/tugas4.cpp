#include <iostream>
using namespace std;

class Mahasiswa {
    public :
    string nama;
    int nim;
    float nilai;
};
int main(){
    Mahasiswa m1;
    m1.nama="Andi";
    m1.nim=123;
    m1.nilai=90;
    cout <<"Nama : "<< m1.nama << endl;
    cout <<"NIM : "<< m1.nim <<endl;
    cout <<"Nilai : "<< m1.nilai <<endl;
    return 0;
}