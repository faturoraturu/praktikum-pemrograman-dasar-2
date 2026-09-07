#include <iostream>
using namespace std;
int main (){
    int umur;
    double tinggi;

    
    cout <<"Masukkan umur "<< endl;
    cin>>umur;

    cout << "Masukkan tinggi "<< endl;
    cin>>tinggi;

    cin.ignore();
    string namaLengkap;
    cout<< "Masukkan nama lengkap : "<<endl;
    getline(cin,namaLengkap);

    cout << "--data mahasiswa -- " <<endl;
    cout << "umur : "<< umur << endl;
    cout << "tinggi : "<< tinggi <<endl;
    cout <<"Nama Lengkap : "<< namaLengkap << endl;
    return 0;
}