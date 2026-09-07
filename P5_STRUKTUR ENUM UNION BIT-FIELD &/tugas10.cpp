#include <iostream>
using namespace std;
typedef struct {
    int x;
    int y;
}Titik ;
int main (){
    Titik p;
    p.x = 5 ;
    p.y = 10 ;
    cout << "Koordinat : (" << p.x << ","<< p.y <<")"<< endl;
    return 0;
}