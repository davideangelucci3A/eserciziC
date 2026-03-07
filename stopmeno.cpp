#include<iostream>
#include <string>
using namespace std;
int main(){
double n, i=0,media=0, tot=0;
do{
   cout<<"inserire n";
   cin>>n;
    i=0;
    tot=tot+n;
}while(n!=-1);
 cout<<"la media è ";
 media=tot/i;
 cout<<media;
return 0;
}