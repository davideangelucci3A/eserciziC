#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n,max=0, x;
 bool a=false;
  do{ cout<<"inserire la  lunghezza del vettore"<<endl;
  cin>>n;
  }while(n%2==0);
  x=n/2;
  int vet[n];
  for(int i=0;i<n;i++){
     cout<<"inserire il numero ";
     cin>>vet[i];
     if(vet[i]>max){ 
        max=vet[i];
        if(vet[x]>max){
            a=true;
        }else{a=false;}
     }
    
  }
  if(a==true){cout<<max;}}