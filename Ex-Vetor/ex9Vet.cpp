#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int armazPar=0,armazImp=0,i;
    vector<int> vet1(10),vetPar,vetImp;
    for(i=0;i<10;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
     for(i=0;i<5;i++){
      if(vet1[i]%2==0){
           vetPar.push_back(vet1[i]);
      }
      else{
        vetImp.push_back(vet1[i]);
      }
    }
    for(i=0;i<vetPar.size();i++){
        armazPar+=vetPar[i];
    }
      for(i=0;i<vetImp.size();i++){
        armazImp+=vetImp[i];
    }
    if(armazPar>armazImp){
        cout<<"PAR MAIOR";
    }
    else if(armazImp>armazPar){
        cout<<"Impar maior";
    }
    else{
        cout<<"Iguais";
    }

    return 0;
}
