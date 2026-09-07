#include <iostream>
using namespace std;
int main(){
    double a,b ;
    char op;

    cout << "Masukkan a operator b " ;
    cin >> a >> op >> b ;

    if (op == '+'){
        cout << "hasil " << a+b << endl;
    }
    else if (op == '-'){
        cout << "Hasil " << a-b << endl ;
    }
    else if (op == '*') {
        cout << " hasil " << a*b << endl;
    }
    else if (op = '/' ){
        if (b==0){
            cout << "error";
        }else {
    cout << " Hasil" << a/b << endl;
        }
      
    }
    else {
    cout << "operator tidak dikenal " << endl ;
    }

}