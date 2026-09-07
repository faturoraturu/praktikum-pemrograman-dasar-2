#include <iostream>
using namespace std ;
int main(){
    int matriks[3][3];
    int baris,kolom;
    cout << "Masukkan nilai matriks 3x3 : \n" ;
    for (int i=0 ; i<3 ;i++ ){
        for (int j=0 ; j<3 ; j ++) {
            cout << " Nilai ["<< i << "]["<< j << "] : " ;
            cin >> matriks[i][j];
        }
    } 
    cout << "\nMatriks yang dimasukkan : \n" ;
    for (int i=0 ;i < 3 ; i ++){
        for (int j=0 ; j<3 ; j ++) {
            cout << matriks[i][j] << " ";
        }
    cout << endl;
    }
    cout << "Masukkan indeks baris yang ingin dilihat : " << endl;
    cin >> baris;
    cout << " Masukkan indeks kolom yang ingin dilihat : " << endl;
    cin >> kolom;

    cout << "Menampilkan nilai pada matriks ["<< baris << "]["<<kolom<<"] adalah : " << matriks[baris][kolom] << endl;
    return 0 ;
}