#include <iostream>
#define linha 4
#define coluna 4
using namespace std;

int main()
{
    int lin,col;
    int mat[linha][coluna];
    for(lin=0;lin<linha;lin++){
        for(col=0;col<coluna;col++){
            if(lin==col){
                mat[lin][col]=1;
            }
            else if(lin+col==linha-1){
                mat[lin][col]=1;
            }
            else{
                mat[lin][col]=0;
            }
        }

    }
    for(lin=0;lin<linha;lin++){
        for(col=0;col<coluna;col++){
            cout<<mat[lin][col]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
