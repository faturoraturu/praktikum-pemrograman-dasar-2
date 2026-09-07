#include <iostream>
using namespace std;
void tampilData(int data[5])
{
    for (int i=0 ;i <5 ; i++){
    cout << data[i] << " ";
    }
}
int main () {
    int data [5] = { 10, 20, 30, 40, 50 };
    tampilData(data);
    return 0;
}