#include <iostream>
using namespace std;
int main(){
int nilai [5] ;
    for (int i=0; i < 5 ; i++){
        cout << "Masukkan nilai ke- " << i+1 << ":" << endl ;
        cin >> nilai[i] ;
    }
    cout << "data nilai : " << endl;
    for (int i = 0 ;i < 5 ; i ++ ) {
        cout << nilai[i] << endl ;
    }
}