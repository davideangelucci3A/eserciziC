#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;


int main(){
    int x, y;
    bool a=true;
    
   do{
      
        if(y!=x){a=false;}

          y=x;
       cout<<"inserire il numero ";
       cin>>x;
            

   
    } while(x!=0);
     if(a==true){cout<<"uguali";
    }else if (a==false){
        cout<<"diversi";}
    return 0;
}