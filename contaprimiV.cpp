#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main(){
    int n=8, contaprimi=0;
    int vet[n];
    for(int i=0;i<n;i++){
      vet[i]=rand()%50+1;
      bool a=false;
      int c=0;
      for(int j=1; j<=vet[i];j++){
              if(vet[i]%j==0){
               c++;  
            }
      
      }
      if(c<=2){contaprimi++;}
       
    }
        for(int i=0;i<n;i++){
            cout<<vet[i]<<", ";}
            cout<<"i numeri primi nell'array sono "<<contaprimi;
            return 0;

    }