#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int ROW = 5;
    const int COL = 5;

    int image[ROW][COL] = {
        {120, 130, 140, 150, 160},
        {100, 110, 120, 130, 140},
        { 90, 210, 220, 230, 240},
        { 90,  80,  70,  60,  50},
        {255, 200, 150, 100,  50}
    };

    // Tampilkan matriks image
    cout << "=== MATRIKS IMAGE 5x5 ===" << endl;
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            cout << setw(5) << image[i][j];
        }
        cout << endl;
    }

    // Pencarian piksel bernilai 210
    cout << "\n=== PENCARIAN PIKSEL BERNILAI 210 ===" << endl;
    bool ditemukan = false;

    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            if (image[i][j] == 210){
                // Piksel 210 ditemukan, tampilkan posisinya
                cout << "Piksel 210 ditemukan pada dimensi [" << i+1 << "][" << j+1 << "]" << endl;
                cout << "Baris ke-" << i+1 << ", Kolom ke-" << j+1 << endl;
                ditemukan = true;
            }
        }
    }

    if (!ditemukan){
        cout << "Piksel bernilai 210 tidak ditemukan." << endl;
    }

    return 0;
}