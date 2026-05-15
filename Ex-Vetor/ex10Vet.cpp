#include <iostream>
using namespace std;

int main()
{
    int vet1[5],vetPar[5],vetImp[5],armazPar=0,armazImp=0,i,j=0,cont=0;

    for(i=0;i<10;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
     for(i=0;i<5;i++){
      if(vet1[i]==7){
            cont=0;
           cout<<"Numero 7 na posicao:"<<i;
            cont++;
      cout<<"Foi encontrado:"<<cont;
      }
     }

    return 0;
}


