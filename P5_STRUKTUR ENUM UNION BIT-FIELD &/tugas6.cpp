#include <iostream>
using namespace std;
struct StatusDevice {
    unsigned int power : 1;
    unsigned int error : 1;
    unsigned int mode :2 ;

};
int main() {
    StatusDevice d ;
    d.power = 1 ;
    d.error = 0 ;
    d.mode = 2 ;
    cout << "Power : " << d.power << endl ;
    cout << "Error : " << d.error << endl ;
    cout << " Mode : " << d.mode << endl;

    return 0;

}