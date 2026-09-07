#include <iostream> 
using namespace std;
int main (){
    double tegangan;
    cin >> tegangan ;
    if ( tegangan < 0 || tegangan > 50 ){
    }
    else if ( tegangan >= 1 && tegangan <= 5){
    cout << " Aman " << endl ; }
    else if ( tegangan > 5 ){
    cout << "Tidak aman " << endl;
    }
    return 0 ;
}