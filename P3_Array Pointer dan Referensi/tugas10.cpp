#include <iostream>
using namespace std;
void ubahNilai(int& nilai) {
    nilai = 50; // Mengubah nilai melalui referensi
}
int main (){
    int nilai = 10;
    ubahNilai(nilai);
    cout << "Nilai setelah fungsi :"<<nilai <<endl; // Output: 50
    return 0;
}