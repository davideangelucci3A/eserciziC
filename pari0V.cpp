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
if(i%2==0){
    vet[i]=0;
}else{
   vet[i]=rand()% 50+1;
}
cout<<vet[i]<<" ";
  }
  
}