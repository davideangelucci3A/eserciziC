#include<iostream>
#include <string>
using namespace std;
int main(){
int n=0, i=0;
double stipendio=1200, p=0, tot, somma;
cout<<"inserire il numero di dipendenti"<<endl;
cin>>n;
do{
    int c;
    cout<<"inserire il tipo di contratto"<<endl;
    cout<<"1 tempo pieno"<<endl;
    cout<<"2 part-time"<<endl;
    cout<<"3 stage"<<endl;
    cin>>c;
    switch(c){
     case 1:p=0.15; tot=stipendio+(stipendio*p); cout<<tot<<endl; ;break;
     case 2:p=0.10; tot=stipendio+(stipendio*p); cout<<tot<<endl;  ;break;
     case 3:p=0.05; tot=stipendio+(stipendio*p); cout<<tot<<endl;  ;break;
     default: cout<<"ERRORE VALORE ERRATO";tot=0; i--;break;
    }
    somma=somma+tot;
    i++;
}while(i<n);
cout<<"il totale degli stipendi è "<<somma;
return 0;
}