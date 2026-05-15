#include <iostream>
using namespace std;

int main()
{
    int vet1[5],vet2[5],vetInter[5],armaz=0,i;

    for(i=0;i<5;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
    for(i=0;i<5;i++){
       vet2[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet2[i]<<"\n"<<"\n";
    }
     for(i=0;i<5;i++){
       vetInter[i]=vet2[i];
       vet2[i]=vet1[i];
    }
     for(i=0;i<5;i++){
       vet1[i]=vetInter[i];
    }
     for(i=0;i<5;i++){
        cout<<vet1[i]<<"vet1 \n";
        cout<<vet2[i]<<"vet2 \n";

    }
    return 0;
}

