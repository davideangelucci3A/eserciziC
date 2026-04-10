#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int vet[8], somma=0;
for(int i=0;i<8;i++){
    cin>>vet[i];
    if(vet[i]<0){
        somma=somma+vet[i];
        vet[i]=0;
    }
  
}
cout<<" la somma è "<<somma<<endl;
for(int i=0;i<8;i++){
    cout<<vet[i]<<" ";
}
return 0;
}