#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int x, y;
    bool a=false;
    
   do{
    cout<<"inserie un numero ";
    if(x%2==0){y=x;}
     cin>>x;
   }while(x!=0);
   cout<<y;
}