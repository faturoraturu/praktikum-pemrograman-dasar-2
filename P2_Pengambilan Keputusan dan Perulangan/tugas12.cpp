#include <iostream>
using namespace std;

int main() {
    int adc;

    // Perulangan sebanyak 10 kali secara berurutan
    for (int i = 1; i <= 10; i++) {
        cout << "Pembacaan ke-" << i << "\n";
        cout << "Masukkan nilai ADC: ";
        cin >> adc;

        // Validasi 1: Jika nilai ADC negatif (di bawah 0)
        if (adc < 0) {
            cout << "Error reading. Skip.\n\n";
            continue; // Lewati pemrosesan, lanjut ke pembacaan berikutnya
        }

        // Validasi 2: Jika nilai ADC lebih dari 4095
        if (adc > 4095) {
            cout << "Out of range. Skip.\n\n";
            continue; // Lewati pemrosesan, lanjut ke pembacaan berikutnya
        }

        // Jika data berada dalam rentang valid (0 - 4095)
        cout << "Processing ADC value: " << adc << "\n\n";
    }

    cout << "Sistem selesai melakukan 10 kali pembacaan.\n";
    
    return 0;
}