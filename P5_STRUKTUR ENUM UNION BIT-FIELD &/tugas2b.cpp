#include <iostream>
using namespace std;
enum GameStatus {MENU,PLAYING,PAUSE,GAME_OVER};
int main (){
    int input;
    cout <<"Tekan Nomor : " << endl;
    cin >> input;

    if (input < 0 || input > 3) {
        cout << "Status tidak valid" << endl ;
        return 0;
    }
    GameStatus status = (GameStatus)input ;
    if (status == MENU){
        cout << " MENU "<< endl;
    }
    else if (status == PLAYING){
        cout << "PLAYING";
    }
    else if (status == PAUSE) {
        cout << " PAUSE" << endl;
    }
    else if (status == GAME_OVER){
        cout << "GAME_OVER" << endl;
    }
    return 0 ;
}