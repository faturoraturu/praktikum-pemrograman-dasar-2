#include <iostream>
using namespace std;
struct Data {
    unsigned int mode : 2;

};
int main (){
    Data d;
    d.mode = 3;
    cout << "Mode = " <<d.mode << endl;
    d.mode = 5 ;
    cout << "mode setelah : " <<d.mode << endl;
}