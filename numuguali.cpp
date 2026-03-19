#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
int n=0, x;
bool a=false;
  cout<<"inserire la lunghezza del vettore ";
   cin>>n; 

   int vet[n];
   for(int i=0;i<n;i++){
      cout<<"inserire il numero ";
      cin>>vet[i];
    }
    for(int i=0;i<n;i++){
     
         if(vet[0]=vet[i]){a=true;}else{ a=false;}
      

    }
    if(a=true){cout<<"tutti i numeri del vettore sono uguali";}
}