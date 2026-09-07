#include <iostream>
using namespace std;
enum GameStatus {MENU ,PLAYING, PAUSE ,GAME_OVER};
int main (){
    int input ;
    cout << "Tekan Nomor : " << endl ;
    cin >> input;
    if (input < 0 || input > 3 ){
        cout << "Status tidak valid "<< endl;
        return 0;
    }
    GameStatus status = (GameStatus )input;
    switch (status ){
        case MENU :
        cout << "MENU"<< endl;
        break;
        case PLAYING :
        cout << "PLAYING "<< endl;
        break;
        case PAUSE :
        cout << "PAUSE"<< endl;
        break ;
        case GAME_OVER :
        cout << " EXIT "<< endl;
        break;

    }
    return 0;
}