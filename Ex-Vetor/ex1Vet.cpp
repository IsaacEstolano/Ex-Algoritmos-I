#include <iostream>
using namespace std;

int main()
{
    int vet[30],i,c2=0,c3=0;

    for(i=0;i<30;i++){
        vet[i]=i;;

    }
    for(i=0;i<30;i++){
        if(vet[i]%2==0 && vet[i]!=0){
            c2++;;
        }
        if(vet[i]%3==0 && vet[i]!=0){
            c3++;
        }
    }
    cout<<c2<<"\n";
    cout<<c3;
    return 0;
}
