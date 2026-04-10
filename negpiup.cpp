#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int x, contap=0, contan=0;
  bool a=false;
  do{
    cout<<"inserire un numero ";
        cin>>x;
        if(x>=0){
            contap++;
        }else{
            contan++;
        }
        if(contan>contap){
            a=true;}
  }while(a==false);
return 0;
}