#include <iostream>
#include <vector>

using namespace std;

int main(){
     int armaz=0,i,j=0;
    vector<int> vet1(5),vetInv;
    for(i=0;i<5;i++){
       vet1[i]=rand()%10;
    }
    for(i=0;i<5;i++){
        cout<<vet1[i]<<"\n";
    }
    for(int j=(int)vet1.size()-1;j>=0;j--){
            vetInv.push_back(vet1[j]);
        }
    
    for(j=0;j<vetInv.size();j++){
        cout<<vetInv[j]<<"\n";
    }

    return 0;
}