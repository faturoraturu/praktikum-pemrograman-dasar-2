#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int& ref = x ; //ref adalah referensi untuk x
    cout << "Nilai x : " << x << endl; // Output: 10
    cout << "Nilai ref : " << ref << endl; // Output: 10
    ref = 20 ; // Mengubah nilai melalui referensi
    cout << "Nilai x setelah diubah :"<< x << endl; // Output: 20
    return 0;
}