#include<iostream>
#include <string>
using namespace std;
int main(){
int n=1,  tot=0;
do{
   cout<<"inserire n ";
   cin>>n;
   
    if(n%2!=0){
    tot=tot+n;
    }
}while(n!=0);
cout<<tot;
return 0;
}