#include<iostream>
#include <string>
using namespace std;
int main(){
  bool c=false;
  double x, costo=0, km=0;
  string risposta, v;
  int veicolo, r;
do{
    cout<<"scegliere il veicolo"<<endl;
    cout<<"1 auto"<<endl;
    cout<<"2 moto"<<endl;
    cin>>veicolo;
  switch(veicolo){
    case 1: cout<<"inserire i chilometri"<<endl;
            cin>>km; 
            v="auto";
            cout<<"scegliere il tipo di carburante"<<endl;
             cout<<"1 benzina"<<endl;
              cout<<"2 diesel"<<endl;
               cout<<"3 elettrico"<<endl;
            cin>>r;
            switch(r){
            case 1: x=0.15 ;break;
            case 2: x=0.13 ;break;
            case 3: x=0.08 ;break;
            };break;
    case 2: cout<<"inserire i chilometri"<<endl;
            cin>>km;
            v="moto";
            cout<<"scegliere il tipo di carburante"<<endl;
             cout<<"1 benzna"<<endl;
              cout<< "2 diesel"<<endl;
            cin>>r;
            switch(r){
            case 1: x=0.07 ;break;
            case 2: x=0.04 ;break;
            };break;
  }
   costo=km*x;
   cout<<"ecco il totale: "<<v<<" paga un totale di "<<costo<<endl;
cout<<"si vuole inserire un'altro veicolo?"<<endl;
cin>>risposta;
if(risposta=="no"){
 c=true;
}
}while(c==false);



return 0;

}