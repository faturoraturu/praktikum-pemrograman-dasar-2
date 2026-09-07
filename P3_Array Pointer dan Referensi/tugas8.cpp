#include <iostream>
using namespace std;
int main () {
    int jumlah ;
    cout << "Masukkan jumlah data : ";
    cin >> jumlah ;
    //allokasi memori dinamis
    int *data = new int [jumlah];
    //input data
    for (int i=0 ; i < jumlah ; i++){
        cout << "Masukkan data ke-" << i+1 << " : ";
        cin >> data[i];
    }
    //menampilkan data
    cout << "\nData yang dimasukkan : \n";
    for (int i=0 ;i <jumlah ;i++){
        cout << data[i]<<" ";
    }
    //membebaskan memori
    delete [] data ;
    return 0;
}