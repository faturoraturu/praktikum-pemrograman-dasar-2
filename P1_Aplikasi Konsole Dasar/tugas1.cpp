#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;

    double r;
    cout << "Masukkan jari-jari: ";
    cin >> r;
    double luas = PI * r * r;
        cout << "Luas = " << luas << endl;
        cout << "Error: jari-jari harus positif" << endl;
    if (r >= 0) {
        
    } else {
        
    }

    return 0;
}