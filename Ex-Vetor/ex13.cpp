#include <iostream>
#include <vector>

using namespace std;

int main(){
     int num=0,i,j=0;
    vector<int> vet1,vet2;
    while(vet1.size()<10){
        num=rand()%10;
            bool repetido=false;

            for(j=0;j<vet1.size();j++){
                if(vet1[j]==num){
                    repetido=true;
                    i--;
                    break;
                }
       }
       if(!repetido){
        vet1.push_back(num);
       }
    }
    while(vet2.size()<10){
        num=rand()%10;
        bool repetido=false;
        for(i=0;i<vet2.size();i++){
            if(vet2[i]==num){
                repetido=true;
                i--;
                break;
            }
            if(!repetido){
                vet2[i]=num;
            }
        }

    }
    for(i=0;i<10;i++){
        cout<<vet1[i]<<"\n";
        cout<<" Vetor 2 \n"<<vet2[i]<<"\n";
    }

    return 0;
}