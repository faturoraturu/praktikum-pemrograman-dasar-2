#include <iostream>
using namespace std ;
double hitungRataRata(int n1,int n2, int n3){
    return (n1+n2+n3)/3.0;

}
char tentukanGrade(double rata){
    if (rata >= 85){
        return 'A' ;
    }
    else if (rata >= 75 ){
        return 'B';
    }
    else if (rata >= 60){
        return 'C';
    }
    else {
        return 'D';
    }

}
int main (){
    int nilai1,nilai2,nilai3;
    cout << "Masukkan 3 nilai :" ;
    cin >> nilai1 >> nilai2 >> nilai3;
    double rata = hitungRataRata(nilai1,nilai2,nilai3);
    char grade = tentukanGrade(rata);
    cout << "Rata-rata = " << rata <<endl;
    cout << "Grade ="<< grade << endl;
    return 0 ;
}