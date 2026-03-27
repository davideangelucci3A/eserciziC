#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int somma[4];
   int vet[4];
   int vit[4];
   for(int i=0;i<4;i++){
    cout<<"inserire il numero nel primo array ";
    cin>>vet[i];
   }
 for(int i=0;i<4;i++){
    cout<<"inserire il numero nel secondo array ";
    cin>>vit[i];
   }
    for(int i=0;i<4;i++){
   somma[i]= vet[i]+vit[i];
   cout<<somma[i]<<" ";
   }
}