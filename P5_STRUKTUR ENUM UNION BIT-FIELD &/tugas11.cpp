#include <iostream>
using namespace std;
typedef int* ptrInt;
int main(){
    int a = 10,b =20;
    ptrInt p1 = &a;
    ptrInt p2 = &b;
    cout << "p1 : " << *p1 << endl;
    cout << "p2 : " << *p2 << endl;
    return 0;
}