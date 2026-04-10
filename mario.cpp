#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    double soldi=0;
    int contap=0, contak=0;
    cout<<"inserire i soldi di Mario"<<endl;
    cin>>soldi;
     do{
        cout<<"scegliere cosa prendere da mangiare:"<<endl;
        cout<<"1: panino "<<endl;
        cout<<"2: kebab "<<endl;
        int c;
        cin>>c;
        switch(c){
         case 1: soldi=soldi-1.50; contap++; cout<<" nuovo saldo "<<soldi; ;  break; 
         case 2: soldi=soldi-3.50; contak++;  cout<<" nuovo saldo "<<soldi; break; 
         default: cout<<"ERRORE";
        }
     }while(soldi>0);
     cout<<"mario ha mangiato il panino "<<contap<<" volte"<<endl;
      cout<<"mario ha mangiato il kebab "<<contak<<" volte"<<endl;
      return 0;
    }
