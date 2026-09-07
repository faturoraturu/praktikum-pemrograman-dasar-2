#include <iostream>
using namespace std;
typedef int Array5[5];
int main(){
    Array5 data ;
    for (int i = 0 ; i < 5 ; i++){
        cin >> data[i];

    }
    cout << "Data : " ;
    for (int i =0 ;i <5 ;i++){
        cout << data[i]<< " ";
    }
    return 0;
}
