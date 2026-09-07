#include <iostream>
using namespace std;
enum StatusMesin {OFF ,IDLE, RUNNING, ERROR };
int main(){
    int input ;
    cout << "Masukan status mesin (0 - 3) :";
    cin >> input ;
    StatusMesin status = (StatusMesin)input ;
    if (status == OFF ){
        cout << "Mesin dalam keadaan OFF " << endl ;
    }
    else if (status == IDLE ){
        cout << "Mesin dalam keadaan IDLE " << endl ;
    
    }
    else if (status == RUNNING ){
        cout << "Mesin dalam keadaan RUNNING " << endl;
    }
    else if (status == ERROR  ){
        cout << " Mesin dalam keadaan ERROR "<< endl;

    }
    else {
        cout << "Mesin tidak valid " << endl;
    }
    return 0;
}