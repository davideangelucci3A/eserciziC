#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x, p=0;
    bool a=false;
   do{
    cout<<"inserire un numero ";
      cin>>x;
      if(x<p){a=true;}
      p=x;
     }while(a==false);
     
     return 0;
}