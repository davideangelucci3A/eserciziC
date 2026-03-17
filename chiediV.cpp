#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n=12, x=0;
 
 

 int vet[n];
 for(int i=0; i<n; i++){
    
     vet[i]= rand() % 50 + 1 ;
 }
 cout<<"inserire un numero"<<endl;
 cin>>x;
 for(int i=0; i<n; i++){
    if(x==vet[i])
     {cout<<i;}
 }
}