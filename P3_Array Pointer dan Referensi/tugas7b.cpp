#include <iostream>
using namespace std;
void tampilData(int* data,int ukuran){
for (int i=0;i<ukuran;i++){
    cout <<data[i]<<" ";
}
}
int main (){
    int data[5] = { 10, 20, 30, 40, 50 };
    tampilData(data,5);
    return 0;
}