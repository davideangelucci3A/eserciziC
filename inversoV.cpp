#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=10, max=0;
 
 

 int vet[n];
 for(int i=1; i<=n; i++){
    
     vet[i]= rand() % 50 + 1 ;
    cout<<vet[i]<<" ";
 }
  cout<<endl;
 for(int i=n; i>=1; i--){
    cout<<vet[i]<<" "; 
      }
}
