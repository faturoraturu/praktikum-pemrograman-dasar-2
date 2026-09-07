#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Masukkan a operator b (contoh: 10 / 2): ";
    cin >> a >> op >> b;

    if (op == '+')
        cout << "Hasil: " << a + b << endl;
    else if (op == '-')
        cout << "Hasil: " << a - b << endl;
    else if (op == '*')
        cout << "Hasil: " << a * b << endl;
    else if (op == '/' && b != 0)
        cout << "Hasil: " << a / b << endl;
    else
        cout << "Operator tidak dikenal / pembagian nol" << endl;

    return 0;
}