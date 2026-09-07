#include <iostream>
using namespace std ;
class Mahasiswa {
    public :
    string nama;
    int nilai1,nilai2, nilai3;
    float hitungRata() {
        return (nilai1 + nilai2 + nilai3)/3.0;
    }
    char grade(){
        float rata = hitungRata();
        if (rata >= 85 ) return 'A';
        else if (rata >= 75 )return 'B';
        else if (rata >= 60 )return 'C';
        else return 'D';
    }
};
int main(){
    Mahasiswa m ;
    cout << "Masukkan nama : ";
    cin >> m.nama;
    cout << "Masukkan 3 nilai : ";
    cin >> m.nilai1>>m.nilai2>>m.nilai3;
    cout << "Rata-rata : "<<m.hitungRata()<<endl;
    cout << "Grade : " << m.grade()<<endl;
    return 0;
}