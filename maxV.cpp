#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10, max=0;
 
 

 int vet[n];
 for(int i=0; i<n; i++){
    
     vet[i]= rand() % 50 + 1 ;
     if(max<vet[i]){max=vet[i];}
    
 }
 cout<<" il numero più grande del vettore è "<<max<<endl;
 for(int i=0; i<n; i++){
    cout<<vet[i]<<" "; 
      }
      return 0;
}