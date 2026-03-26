#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n,x;
   cout<<"inserire la  lunghezza del vettore"<<endl;
  cin>>n;
 int vet[n];
 for(int i=0; i<n; i++){
     cout<<"inserire il numero ";
     cin>>vet[i];
     x=vet[0];
     vet[0]=vet[n-1];
     vet[n-1]=x;
 }
  for(int i=0; i<n; i++){
    cout<<vet[i]<<" ";

  }

}