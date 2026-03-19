#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
int n=0, x;
  cout<<"inserire la lunghezza del vettore ";
   cin>>n; 

   int vet[n];
   for(int i=0;i<n;i++){
      cout<<"inserire il numero ";
      cin>>vet[i];
      if(i=n-2){
         for(int j=0;j<i;j++){
            if(vet[i]>vet[j]){x++;}
            break;
         }

      }

   }
      if(x=n-2){cout<<"l'ultimo numero è il maggiore ";}
      for(int i=0;i<n;i++){
        cout<<vet[i]<<" ";      }
}