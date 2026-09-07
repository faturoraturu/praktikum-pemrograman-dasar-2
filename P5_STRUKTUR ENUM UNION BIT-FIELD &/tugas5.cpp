#include <iostream>
using namespace std;
struct DataStruct{
    int angka ;
    float desimal ;
};
union DataUnion {
    int angka;
    float desimal;
};
int main(){
    cout << "Ukuran Stuct : " << sizeof (DataStruct) << endl;
    cout << " Ukuran Union : " << sizeof (DataUnion) << endl;
    return 0 ;
}