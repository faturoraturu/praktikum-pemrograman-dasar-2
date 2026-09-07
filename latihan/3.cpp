#include <iostream>
using namespace std;
int main (){
    int jariJari;
    const double pi = 10;
    cout << "Masukkan jari-jari :";
    cin >> jariJari;
    const double luas = pi*jariJari*jariJari;
    cout << "Luas lingkaran : " <<luas<< endl; 
}