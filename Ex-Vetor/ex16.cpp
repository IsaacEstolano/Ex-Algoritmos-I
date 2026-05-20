#include <iostream>
#include <vector>

using namespace std;

int main(){
     int num=0,i,j=0;
    vector<int> vet1,vet2,vet3;
    while(vet1.size()<10){
        num=rand()%21+10;
            bool repetido=false;

            for(j=0;j<vet1.size();j++){
                if(vet1[j]==num){
                    repetido=true;
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
                break;
            }
        }
        if(!repetido){
            vet2.push_back(num);
        }

    }
    for(i=0;i<10;i++){
        cout<<vet1[i]<<"\n";
    }
    cout<<"########################";
    for(i=0;i<10;i++){
        cout<<vet2[i]<<"\n";
    }
        for(i=0;i<vet1.size();i++){
             vet3.push_back(vet1[i]);
        }
        for(i=0;i<vet2.size();i++){
            bool repetido=false;
            for(j=0;j<vet3.size();j++){
                if(vet3[j]==vet2[i]){
                    repetido=true;
                    break;
                }
            }
            if(!repetido){
                vet3.push_back(vet2[i]);
            }
        }
  cout<<"++++++++++++";
        for(i=0;i<vet3.size();i++){
            cout<<vet3[i];
        }
    return 0;
}