#include<iostream>
#include <string>
using namespace std;
int main(){
    double prezzo, sconto;
do{
    cout<<"inserire il prezzo"<<endl;
    cin>>prezzo;
    if(prezzo!=0){
    cout<<"inserire lo sconto"<<endl;
    cin>>sconto;
   
     double tot=prezzo-(prezzo*sconto/100);
     cout<<tot<<endl;

   }

}while(prezzo!=0);
    return 0;
}