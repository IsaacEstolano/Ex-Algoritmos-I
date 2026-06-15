#include <iostream>
#include <vector>
#define ordem 5
using namespace std;
/*
 Faça um algoritmo que leia duas matrizes X e Y, quadradas com ordem 5, e faça as
seguintes manipulações:
• Gere uma matriz W com os menores elementos entre as matrizes X e Y, ou seja, um
elemento Wij possui o menor valor entre os elementos Xij e Yij. Se os elementos forem
iguais ambos são o menor valor.
• Gere um vetor com os elementos da diagonal principal da matriz X;
• Encontre a coluna da matriz Y que possui a menor soma do valor de seus elementos
dentre todas as colunas da matriz, e mostre qual é a posição dessa coluna. Caso
existam somas de colunas iguais considerar a primeira coluna com a ocorrência do
valor. 
*/
int main()
{
    int lin,col,soma,colMenor,colpos;
    vector <int> digPrincipal;
    bool primeiro = true;
    int matY[ordem][ordem];
    int matX[ordem][ordem];
    int matW[ordem][ordem];
    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            matY[lin][col]=rand()%20;
            matX[lin][col]=rand()%20;

        }
    }
     cout<<"Matriz Y:"<<"\n";

    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
        cout<<matY[lin][col]<<"\t";
        }
        cout<<endl;
        
    }
         cout<<"Matriz X:"<<"\n";

     for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            if(lin==col){
                digPrincipal.push_back(matX[lin][col]);
            }
        cout<<matX[lin][col]<<"\t";
        }
        cout<<endl;
        
    }
    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            if(matX[lin][col]<matY[lin][col]){
                matW[lin][col]=matX[lin][col];
            }
            else{
                matW[lin][col]=matY[lin][col];
            }
        }
    }
    cout<<"Matriz W"<<"\n";
    for(lin=0;lin<ordem;lin++){
        for(col=0;col<ordem;col++){
            cout<<matW[lin][col]<<"\t";
        }
        cout<<endl;
    }
   for(int i=0;i<digPrincipal.size();i++){
    cout<<digPrincipal[i]<<"\n";
   }

    for(col=0;col<ordem;col++){
        soma=0;
        for(lin=0;lin<ordem;lin++){
            soma+=matY[lin][col];
        }
        if(primeiro){
        colpos=col;
        colMenor=soma;
        primeiro=false;
        }
        if(soma<colMenor && primeiro==false  ){
            colpos=col;
            colMenor=soma;
        }
    }
    cout<<colMenor<<"\n";
    cout<<colpos;
    return 0;
}
