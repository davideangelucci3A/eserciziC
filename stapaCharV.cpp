#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
  int n=10; 
  string v[n];
   for(int i=0;i<n;i++){
     cout<<"inserire la parola ";
     cin>>v[i];

   }
        
   for(int i=0;i<n;i++){
    int conta=0;
    for(char cifra : v[i]){

conta++;
}
if(conta>4){cout<<v[i]<<" ";}
}
}