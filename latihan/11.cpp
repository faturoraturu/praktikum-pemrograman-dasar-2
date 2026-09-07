#include <iostream>

using namespace std;
enum statusGame {MENU,PLAYING,PAUSE,EXIT};
int main (){
    int input ;
    cout <<"Masukkan status :" <<endl;
    cin >> input ;
    if (input < 0 || input > 3  ){
        cout << " tidal valid " << endl;
    }
    statusGame status = (statusGame)input;
    if (input == MENU ){
        cout << "MENU" << endl;
    }
    else if (input == PLAYING){
        cout << "PLAYING " << endl;
    }
    else if (input == PAUSE ){
        cout << "PAUSE" << endl;
    }
    else if (input == EXIT ){
        cout << "EXIT"<< endl;
    }
return 0;
}