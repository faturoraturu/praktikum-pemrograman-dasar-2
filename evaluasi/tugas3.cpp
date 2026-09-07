#include <iostream>
using namespace std;
int main(){
    int matriks [4][4]= 
    {
        {255,168,172,150},
        {135,137,200,111},
        {110,112,187,111},
        {25,134,137,31}
        };
    for (int i=0 ;i<4 ;i++ ){
        for (int j=0 ;j<4;j++){
            if (matriks[i][j]>150 ){
                cout <<"["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
    }
    
    