#include <iostream>
using namespace std;
int &maksimum (int &a,int &b){
    if (a>b)
    return a;
    else 
    return b;
}
int main (){
    int x =10;
    int y =25;
    int &hasil = maksimum (x,y);
    cout <<"Nilai maksimum adalah : " << hasil << endl ;
    return 0;
}