#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int ROW = 3;
    const int COL = 4;

    int suhu[ROW][COL];
    int total = 0;

    // 1) Input data sensor (nested loop)
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << "Masukkan suhu sensor [" << i << "][" << j << "] : ";
            cin >> suhu[i][j];
            total += suhu[i][j];
        }
    }

    // 2) Tampilkan tabel suhu
    cout << "\n=== TABEL SUHU SENSOR (3x4) ===\n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << setw(5) << suhu[i][j];
        }
        cout << endl;
    }

    // 3) Hitung rata-rata
    double rata = static_cast<double>(total) / (ROW * COL);
    cout << "\nRata-rata suhu = " << rata << " °C\n";

    return 0;
}