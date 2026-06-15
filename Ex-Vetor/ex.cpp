/*
Elabore algoritmo que leia um conjunto de números inteiros que serão armazenados em
uma matriz A com dimensão 10x10. A partir da matriz A o programa deve gerar um vetor
com os maiores elementos de cada linha e outro vetor com os menores elementos de cada
coluna. 
*/
#include <iostream>
#include <vector>
#define ordem 5
using namespace std;

int main(){

    int lin,col;
    int mat[ordem][ordem];
    int matY[ordem][ordem];
    int vetLin[ordem],vetCol[ordem];
    bool primeiro=true;
    
    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            mat[lin][col]=rand()%10;
        }
    }
   for(int i=0;i<5;i++){
    vetLin[i]=0;
    vetCol[i]=0;
   }
      for(lin=0;lin<ordem;lin++){
        for(col=1;col<=ordem;col++){
            if(primeiro){
                vetLin[0]=mat[lin][col];
                primeiro=false;
            }
            if(mat[lin][col]>mat[lin][col-1]){
                vetLin[lin]=mat[lin][col];
            }
        }
    }
     for(col=0;lin<ordem;lin++){
        for(lin=1;col<=ordem;col++){
            if(primeiro){
                vetCol[0]=mat[lin][col];
                primeiro=false;
            }
            if(mat[lin][col]<mat[lin][col-1]){
                vetCol[lin]=mat[lin][col];
            }
        }
    }
     for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
        cout<<mat[lin][col]<<"\t";
           }
           cout<<endl;
    }
      for(lin=0;lin<ordem;lin++){
            cout<<vetLin[lin]<<"\t";
    }
    cout<<"Vetor coluna:\n";
     for(lin=0;lin<ordem;lin++){
            cout<<vetCol[lin]<<"\t";
    } 
    return 0;
}
