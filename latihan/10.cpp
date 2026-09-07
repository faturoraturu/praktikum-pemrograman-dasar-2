#include <iostream>
using namespace std;
enum statusMesin{OFF,IDLE,RUNNING,ERROR};
int main(){
    int input;
    cout << "input status :" << endl;
    cin>> input;
    statusMesin status = (statusMesin)input;
    if (status == OFF ){
        cout << "mesin mati "<< endl;
    }
    else if (status == IDLE ){
        cout << "mesin idle "<<endl;
    }
    else if (status == RUNNING){
        cout << "Mesin berjalan"<<endl;
    }
    else if (status == ERROR){
        cout <<"Mesin Error" << endl;
    }
    else {
        cout << "tidak valid" << endl;
    }
    return 0;
}    