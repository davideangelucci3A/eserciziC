#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x, p=1;
     cout<<"inserire il numero ";
     cin>>x;
   while(p<5000){
       p=x*p;
     cout<<p<<endl;
     }
     
     return 0;
}