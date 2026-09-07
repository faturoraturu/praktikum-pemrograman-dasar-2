#include <iostream>
using namespace std;
typedef struct {
    int x ;
    int y ;
}Titik; 
int main (){
    Titik d;
    d.x = 5;
    d.y = 6;
    cout << "Koordinat : "<< d.x <<"," << d.y << endl;
}