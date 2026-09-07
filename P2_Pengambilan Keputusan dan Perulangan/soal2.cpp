#include <iostream>
using namespace std;
int main (){
    int nilai=70;
    int umur=16;
    int suhu=95;
    if (nilai == 75){
        cout << "nilai tepat 75\n";
    }
    if (umur >= 17){
        cout << "Boleh memiliki SIM\n" ;
        cout << "Silahkan daftar ke kantor polisi\n";
    }
    if (suhu >= 90){
        cout << "Mesin Overheat\n";
    }
    return 0;
}
