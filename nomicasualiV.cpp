#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
    int n=10, indice=0, p;

    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};

    string v[n];
  for(int i=0;i<n;i++){
     indice=rand()%5;
    v[i]=nomiPossibili[indice];
    if(v[i]=="Anna"){p=i;}
  }
  cout<<"anna si trova nella posizione "<<p;
}