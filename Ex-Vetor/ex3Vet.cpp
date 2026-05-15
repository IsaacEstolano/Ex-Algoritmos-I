#include <iostream>
using namespace std;

int main()
{
    int vet1[5],vet2[5],vetArmaz[5],i,cont=0;
    bool first=true;

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
        vetArmaz[i]=vet1[i]*vet2[i];
    }
    for(i=0;i<5;i++){
        cout<<vetArmaz<<"\n";
    }
    return 0;
}
