#include <iostream>
using namespace std;
struct Normal{
    int power;
    int error;
    int mode;
};
struct Hemat {
    unsigned int power : 1;
    unsigned int error : 1;
    unsigned int mode : 2 ;
};
int main () {
    cout << "normal = " << sizeof(Normal) << " byte" << endl ;
    cout << "hemat = " << sizeof(Hemat) << " byte" <<endl;
}