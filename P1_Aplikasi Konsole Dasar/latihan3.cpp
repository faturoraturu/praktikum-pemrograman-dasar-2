#include <iostream>
using namespace std;
int main() {
    int umur;
    cin >> umur;
    if (umur < 0) {
        cout << "Input tidak valid!" << endl;
        return 1; // keluar karena error
    }
    cout << "Data diterima." << endl;
    return 0;
}
