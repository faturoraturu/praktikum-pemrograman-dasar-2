#include <iostream>
using namespace std;

int main() {
    int nilai = 10;
    int* x =&nilai;
    *x = 50;
    cout << nilai ;
    return 0;
}