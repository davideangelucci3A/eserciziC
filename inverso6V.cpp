#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int vet[6];
  for(int i=0;i<6;i++){
    cout<<"inserire il numero  ";
    cin>>vet[i];
   }
   cout<<"larray invertito è :"<<endl;
   for(int i=5;i>=0;i--){
    cout<<vet[i]<<" ";
   }

}