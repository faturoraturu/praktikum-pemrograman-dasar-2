#include <iostream>
using namespace std;
int main (){
    double tegangan ;
    cout << " Masukkan tegangan :" << endl;
    cin >> tegangan ;
    if (tegangan <= 5){
        cout << "aman " << endl;
    }
    else {
        cout <<" bahaya" << endl ;
    }
}    