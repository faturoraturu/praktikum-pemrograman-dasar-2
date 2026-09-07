#include<iostream>
using namespace std;
double hitungRataRata (int n1, int n2,int n3){
    return (n1+n2+n3)/3.0;
}
char tentukanGrade(double rata){
    if (rata >= 85 )
{
    return 'A';
}
else if (rata >= 70) {
    return 'B';
}
else if (rata >= 60) {
    return 'C';
}
else {
    return 'D';
}
}
int main (){
    int nilai1,nilai2,nilai3 ;
    cout << "masukkan 3 nilai : ";
    cin >> nilai1 >> nilai2 >> nilai3 ;
    double Rata = hitungRataRata(nilai1,nilai2,nilai3) ;
    char Grade = tentukanGrade(Rata);
    cout << "Rata-rata :" << Rata << endl;
    cout << "Grade :" << Grade << endl;
    return 0;
}