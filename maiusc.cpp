#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
char c;
bool x=false;
do{
    cout<<"inserire il carattere ";
    cin>>c;
    if(c>='a'&&'z'<=c){
        cout<<"minuscolo"<<endl;

    }else if(c>='A'&&'Z'<=c ){

        cout<<"maiuscolo"<<endl;
    }else{        cout<<"carattere non valido"<<endl;}

    cout<<"se ci si vuole fermare inserire stop ";
    string a;
    cin>>a;
    if(a=="stop"){x=true;}
}while(x==false);


}