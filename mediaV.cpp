#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=0;
 double tot=0, media=0;
 
 cout<<"inserire la  lunghezza del vettore"<<endl;
 cin>>n;
 int vet[n];
 for(int i=0; i<n; i++){
    cout<<"inserire il numero del vettore "; 
     cin>>vet[i];
          tot=tot+vet[i];
 }
 media=tot/n;
 for(int i=0; i<n; i++){
    cout<<vet[i]<<" "; 
      }
 cout<<"la media è "<<media;
 return 0;
}