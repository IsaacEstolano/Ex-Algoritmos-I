/*
Faça um algoritmo que preencha uma matriz 20 x 20 de reais e some cada uma das linhas,
armazenando o resultado da soma em um vetor. A seguir, multiplique cada elemento da
matriz pela soma da sua linha, e jogue em uma segunda matriz de mesmo tamanho. Mostre
a matriz resultante. 
*/
#include <iostream>
#include <vector>
#define ordem 20
using namespace std;

int main(){

    int lin,col;
    int mat[ordem][ordem];
    int matY[ordem][ordem];
    int vet[ordem];
    
    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            mat[lin][col]=rand()%10;
        }
    }
   for(int i=0;i<20;i++){
    vet[i]=0;
   }
      for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            vet[lin]+=mat[lin][col];
        }
    }
      for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            matY[lin][col]=mat[lin][col] * vet[lin];
        }
    }
      for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            cout<<mat[lin][col]<<"\t";
                }
                cout<<endl;
    }
    cout<<"Matriz 2:\n";
     for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            cout<<matY[lin][col]<<"\t";
                }
                cout<<endl;
    } 
    return 0;
}
