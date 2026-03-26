#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10,x,somma=0,m=1, max=0 ;
   bool a=false;
  int vet[n];
  for(int i=0;i<n;i++){
      vet[i]=rand()% 50+1;
  }
  do{
  cout<<"scegliere cosqa si vuole fare:"<<endl;
  cout<<"1. Somma tutti gli elementi"<<endl;
  cout<<"2. Prodotto degli elementi"<<endl;
  cout<<"3. Trova il massimo."<<endl;
  cout<<"4 uscire"<<endl;
 cin>>x;
  switch(x){
   case 1: for(int i=0;i<n;i++){
      somma=somma+vet[i];
  } cout<<somma; break;
   case 2: for(int i=0;i<n;i++){
      m=m*vet[i];
  } cout<<m; break;
   case 3:for(int i=0;i<n;i++){
      if(max<vet[i]){max=vet[i];}
  }cout<<max; break;
  case 4: a=true;break;
  default: cout<<"valore non valido";
  }
}while(a=false);
}