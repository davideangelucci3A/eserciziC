#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int x;
    int vet[7];
    for(int i=0;i<7;i++){
         cout<<"inserire il numero  ";
      cin>>vet[i];
    }
    cout<<"inserire il numero da eliminare  ";
      cin>>x;
      int vet2[6];
     for(int i=0;i<7;i++){
         if(vet[i]!=x){
           int j=0;
           vet2[j]=vet[i];
           j++;
         }
    }
    for(int j=0;j<6;j++){
         cout<<vet2[j];
      
    }
}