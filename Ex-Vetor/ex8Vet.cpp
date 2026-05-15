#include <iostream>
using namespace std;

int main()
{
    int vet1[5],vetPosi[5],vetInter[5],armaz=0,i;

    for(i=0;i<5;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
     for(i=0;i<5;i++){
      if(vet1[i]%5==0){
            int j=0;
            vetPosi[j]=i;
            j++;
      }
    }

     for(i=0;i<5;i++){
        cout<<vetPosi[i]<<"vet \n";

    }
    return 0;
}
