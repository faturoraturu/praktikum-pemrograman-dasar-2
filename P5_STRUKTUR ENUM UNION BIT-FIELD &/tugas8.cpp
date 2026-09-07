#include <iostream>
using namespace std ;
struct Data{
    unsigned int mode : 2;
};
int main(){
    Data d ;
    d.mode = 3 ;
    cout << "Mode = " << d.mode << endl;

    d.mode = 5;
    cout << "Mode setelah diisi 5 : " << d.mode <<endl;
    return 0 ;
}