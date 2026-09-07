#include <iostream>
using namespace std;
int main (){
    double tegangan ;
    cout << "Masukkan tegangan :" << endl;
    cin >> tegangan;
    if (tegangan > 12){
        cout << "over " << endl ;
    }
    else if (tegangan >= 10) {
        cout << "aman " << endl ;
    }
    else {
        cout << "low " << endl;
    }
    return 0;
} 