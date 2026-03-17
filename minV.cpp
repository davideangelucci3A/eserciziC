#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=0, min=999999;
 
 
 cout<<"inserire la  lunghezza del vettore"<<endl;
 cin>>n;
 int vet[n];
 for(int i=0; i<n; i++){
     cout<<"inserire il numero del vettore "; 
     cin>>vet[i];
     if(min>vet[i]){min=vet[i];}
    
 }
 cout<<" il numero più piccolo del vettore è "<<min<<endl;
 for(int i=0; i<n; i++){
    cout<<vet[i]<<" "; 
      }
      return 0;
}