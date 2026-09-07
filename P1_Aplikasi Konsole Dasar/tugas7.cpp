#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159;
    double jariJari;
    
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    
    double luas = PI * jariJari * jariJari;
    cout << "Luas lingkaran: " << luas << endl;
    return 0;
}