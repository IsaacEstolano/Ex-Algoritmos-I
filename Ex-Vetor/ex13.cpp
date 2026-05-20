#include <iostream>
#include <vector>

using namespace std;

int main(){
     int num=0,i,j=0;
    vector<int> vet1;
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
    for(i=0;i<10;i++){
        cout<<vet1[i]<<"\n";
    }

    return 0;
}