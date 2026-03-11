#include<iostream>
#include <string>
using namespace std;
int main(){
 int e=0, n;
 cout<<"si hanno 3 tentativi per inserire il codice corretto"<<endl;
 do{
   cout<<"inserire il codice"<<endl;
   cin>>n;
   switch(n){
    case 400: cout<<"Bad Request"<<endl;
              e++ ; break;
    case 401: cout<<"Unauthorized"<<endl;
              e++ ;break;
    case 403:  cout<<"Forbidden"<<endl;
              e++ ;break;
    case 404: cout<<"Not Found"<<endl;
               e++;break;
    case 200: cout<<" corretto!"<<endl; break;
    default :cout<<"Unknown Error"<<endl;
             e++;break;
   } 


 }while(e<3);
return 0;
}