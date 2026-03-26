#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
 int n,x, m=1;
   cout<<"inserire la  lunghezza del vettore"<<endl;
  cin>>n;
  int vet[n];
  for(int i=0;i<n;i++){
   cout<<"inserire un numero ";
   cin>>vet[i];
   if(i%2!=0){
    m=m*vet[i];
   }

}
cout<<"la moltiplicazione è "<<m<<endl;
for(int i=0;i<n;i++){
    cout<<vet[i]<<" ";
}
}