#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main() {
bool pari=true;
int numeri[10];
int max=0;


for(int i=0;i<10;i++){
    cout<<"inserisci un numero: ";
    cin>>numeri[i];
    cout<<endl;
}
int massimo=0,temp=0,numero=0,n=0,cella=0;

for(int j=0;j<10;j++){
    max=0;
    temp=0;
    n=0;

   for(int i=0;i<10;i++){
    if(numeri[j]==numeri[i]){
   max++;   
   temp=j;
   n=numeri[j];
   }
   }
   if(max>massimo){
    massimo=max;
    cella=temp;
    numero=n;
   }
   

}
cout<<"il numero che compare più volte è "<<numero<<" e compare "<<massimo<<" volte";
   




cout<<endl;
return 0;
}