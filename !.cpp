#include<iostream>
#include <string>
using namespace std;
int main(){
    int n, i=1;
     int q=1;
 cout<<"inserire il numero di cui si vuole calcolare"<<endl;
 cin>>n;

 while(i<=n){
     q=q*i;
          i++; 
         
 }
 cout<<q;
}