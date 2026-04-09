#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main(){
    int n=5;
    bool pari=false;
    int v[n];
  for(int i=0;i<n;i++){
    cout<<"inserisci il numero ";
     cin>>v[i];
     if(v[i]%2==0){
        pari=true;
     }else{pari=false;}
    }
    if(pari==true){cout<<"tutti i numeri dell'array sono pari"<<endl;}
    for(int i=0;i<n;i++){ cout<<v[i]<<" ";}
    return 0;
}