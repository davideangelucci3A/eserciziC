#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int n;
    cout<<"inserire la lungheza del vettore ";
    cin>>n;
    int vet1[n];
    int vet[n];
    for(int i=0;i<n;i++){
         cout<<"inserire il numero  ";
      cin>>vet[i];
    }
    cout<<"inserire secondo array  ";
    for(int j=0;j<n;j++){
         cout<<"inserire il numero  ";
      cin>>vet1[j];
    }
    int vet2[n*2];
    for(int x=0;x<n*2;x++){
         if(x<n){
            int i=0;
            vet2[x]=vet[i];
            i++;
         }else{
            int j=0;
            vet2[x]=vet1[j];
            j++;
         }
        cout<<vet[x];
    }
    return 0;
}