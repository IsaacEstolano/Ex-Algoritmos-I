#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int armaz=0,i,j=0;
    vector<int> vet1(5),vetPosi,vetInter;
    for(i=0;i<5;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
     for(i=0;i<5;i++){
      if(vet1[i]%5==0){
            vetPosi.push_back(i);
      }
    }
     for(i=0;i<vetPosi.size();i++){
        cout<<vetPosi[i]<<"Posição \n";
    }
    return 0;
}