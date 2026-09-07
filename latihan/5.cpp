#include <iostream>
using namespace std ;
int main () {
    int a = 6;
    int b = 3 ;
    int c = 2;
    cout << (a + b * c > 10 && c * 2 == b + 1 || a % 4 == 2 ) << endl;
    return 0 ;
}