#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    
    cout << "\n=== ARITMATIKA ===\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    
    cout << "\n=== RELASIONAL ===\n";
    cout << boolalpha;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a == b : " << (a == b) << endl;
    
    cout << "\n=== LOGIKA ===\n";
    cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0): " << (a > 0 || b > 0) << endl;
    
    return 0;
}