#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10, somma=0;
 
 int vet[n];
 for(int i=0; i<n; i++){
    
     vet[i]= rand() % 100 + 1 ;
        if(i%2==0){
             
       somma=somma+vet[i];
        }
    }
 cout<<"la somma degli elementi nelle posizioni pari è "<<somma<<endl;
     for(int i=0; i<n; i++){
     cout<<vet[i]<<" ";

     }
return 0;
}