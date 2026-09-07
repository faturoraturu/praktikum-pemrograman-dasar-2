#include <iostream>
using namespace std;
typedef int Nilai;
int main(){
    Nilai uts ,uas;
    cout << "Masukkan nilai UTS dan UAS : ";
    cin >> uts >> uas;
    Nilai rata = (uts + uas)/2;
    cout << "Rata-rata : " << rata << endl ;
    return 0;
}
