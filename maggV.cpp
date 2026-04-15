#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=6, contam=0, contai=0;
   
  int vet[n];
  for(int i=0;i<n;i++){
   cout<<"inserire un numero ";
   cin>>vet[i];
   }

cout<<"inserire il numero ";
int x;
cin>>x;
for(int i=0;i<n;i++){
    if(vet[i]>=x){
    contam++;
   }else{ contai++;}
}
cout<<" i numeri maggiori di "<<x<<" sono "<<contam<<endl;
cout<<" i numeri minori di "<<x<<" sono "<<contai<<endl;
return 0;
}
