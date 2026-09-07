#include <iostream>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi matriks 4x4
    int matriks[4][4] = {
        {255, 168, 172, 150},
        {135, 137, 200, 111},
        {110, 112, 187, 111},
        { 25, 134, 137,  31}
    };

    // Menampilkan matriks
    cout << "Matriks 4x4 :\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    // Menampilkan dimensi yang nilainya > 156
    cout << "\nDimensi matriks dengan nilai lebih dari 156 :\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriks[i][j] > 156) {
                cout << "Baris " << i+1 << ", Kolom " << j+1
                     << " adalah matriks[" << i << "][" << j << "]"
                     << " = " << matriks[i][j] << endl;
            }
        }
    }

    return 0;
}