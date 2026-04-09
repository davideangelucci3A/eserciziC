#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
    int n=10, contap=0;
    int v[n];
  for(int i=0;i<n;i++){
     v[i]=rand()%50+1;
     if(v[i]%2==0){
        contap++;
     }
    }
    if(contap>=3){
        cout<<"i numeri pari generati sono più di 3 ";
    }else{ cout<<"i numeri pari generati sono meno di 3";}
    return 0;
}