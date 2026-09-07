#include <iostream>
using namespace std;
typedef int array5[5];
int main (){
    array5 data;
    for (int i=0 ;i < 5 ; i++){
    cin >> data[i] ;
}
    cout << "data : " ;
    for (int i=0 ; i< 5 ; i ++){
        cout << data[i] << " ";
    }

}
