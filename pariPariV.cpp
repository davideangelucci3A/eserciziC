#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10;
   
  int vet[n];
  for(int i=0;i<n;i++){

   vet[i]=rand()%100+1;
   }
    for(int i=0;i<n;i++){
         if(i%2==0){
             if(vet[i]%2==0){
                cout<<"il numero "<<vet[i]<<" nella posizione "<<i<<" è pari"<<endl;
             }
         }

    }
    return 0;
}