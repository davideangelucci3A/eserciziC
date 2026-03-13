#include<iostream>
#include <string>
using namespace std;
int main(){
 int n, somma=0, max=0, min=9999999,i=0; 
 do{
    i++;
 cout<<"inserire il numero"<<endl;
      cin>>n;
      if(n!=0){if(n>max){
        max=n;
      }else if(n<min){
        min=n;
      }
   somma=somma+n;
    }
 }while(n!=0);
double media;
media=somma/i;
cout<<"la somma è "<<somma<<" la media è "<<media<<" il minore è "<<min<<" il maggiore è  "<<max;
}