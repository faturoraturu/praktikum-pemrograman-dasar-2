#include<iostream>
using namespace std;
class Mahasiswa {
    public :
    string nama;
    int nilai;
    void tampil (){
        cout << "Nama : " << nama << endl ;
        cout << "Nilai : "<< nilai <<endl ;
    }
};
int main (){
    Mahasiswa m;
    m.nama = "Sinta";
    m.nilai = 85 ;
    m.tampil ();
    return 0;
}