#include<iostream>
#include <string>
using namespace std;
int main(){
int n=0;
double prezzo=15, somma=0, tot;
cout<<"inserire il numero di biglietti"<<endl;
cin>>n;
for(int i=0;i<n;i++){
      string tipo;
      double sconto;
      cout<<"inserire il tipo di biglietto: studente, adulto, over 65"<<endl;
     cin>>tipo;
     if(tipo=="studente"){
        sconto=0.30;
     }else if(tipo=="adulto"){sconto=0.05;}
     else if(tipo=="over 65"){sconto=0.40;}
    tot=prezzo-(prezzo*sconto);
    somma=somma+tot;
}
cout<<somma;
return 0;
}