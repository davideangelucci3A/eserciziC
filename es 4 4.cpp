#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10,x,somma=0,m=1, max=0 , conta;
   bool a=false, b=false;
  int vet[n];
  do{
    if(b=false){
        for(int i=0;i<n;i++){
      vet[i]=rand()% 50+1;
        }
    }
    b=true;
    cout<<"scegliere cosqa si vuole fare:"<<endl;
  cout<<"1. Conta elementi pari"<<endl;
  cout<<"2. Conta elementi dispari"<<endl;
  cout<<"3. Somma elementi pari"<<endl;
  cout<<"4. Somma elementi dispari"<<endl;
  cout<<"5. uscire"<<endl;
  cin>>x;
   switch(x){
      case 1:  for(int i=0;i<n;i++){
               if(vet[i]%2==0){
                conta++;
               }}
               cout<<"i numeri pari sono "<<conta;
        ;break;
      case 2:for(int i=0;i<n;i++){
               if(vet[i]%2!=0){
                conta++;
               }}
               cout<<"i numeri dispari sono "<<conta; ;break;
      case 3: for(int i=0;i<n;i++){
               if(vet[i]%2==0){
                somma=somma+vet[i];
               }}
               cout<<"la somma di numeri pari è "<<somma;;break;
      case 4: for(int i=0;i<n;i++){
               if(vet[i]%2!=0){
                somma=somma+vet[i];
               }}
               cout<<"la somma di numeri dispari è "<<somma;;break;;break;
      case 5: a=true;break;
       default: cout<<" valore errato ";break;}
   
   cout<<"si vuole cambiare vettore? ";
     string t;
     cin>>t;
       if(t=="si"){b=false;}
  }while(a==false);
return 0;
}