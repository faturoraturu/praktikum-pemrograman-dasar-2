#include <iostream>
using namespace std;
struct DataStruktur {
    int angka ;
    float desimal;
};
union DataUnion {
    int angka ;
    float desimal ;
};
int main (){
    cout << "ukuran angka :" << sizeof(DataStruktur) << endl;
    cout << "ukuran desimal :" << sizeof(DataUnion)<< endl;
}