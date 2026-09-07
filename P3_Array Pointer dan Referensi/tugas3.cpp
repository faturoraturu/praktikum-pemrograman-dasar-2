#include <iostream>
using namespace std;
int main (){
    int matriks[3][3] ;
    int baris,kolom;
    cout << "masukkan nilai matriks 3x3 : \n";
    //input matriks
     for (int i =0 ; i<3 ; i++){
        for (int j=0 ;j<3 ;j++){
            cout << "nilai ["<<i<<"]["<<j<<"] : ";
            cin >> matriks [i][j];
        }
        }
        //menampilkan matriks
        cout << "\nMatriks yang dimasukkan : \n";
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << matriks[i][j]<<" ";
            }
            cout << endl;
        }
        //input dimensi yang ingin dicari
        cout << "\n Masukkan indeks baris yang ingin dilihat : ";
        cin >> baris ;

        cout << "\n Masukkan indeks kolom yang ingin dilihat : ";
        cin>> kolom ;
        //menampilkan nilai pada dimensi tertentu
        cout <<"Nilai pada matriks ["<<baris<<"]["<<kolom<<"] adalah :"
         << matriks [baris-1][kolom-1] << endl;
         return 0;
}