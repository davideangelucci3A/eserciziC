#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"scegliere cosa usare, 1:parola 2:frase"<<endl;
  int a=0;
     int x=0;
    string nome, frase;
    cin>>a;

    switch(a){

case 1: cout<<"inserire una parola"<<endl;

      cin >> nome;

 
     for(char lettera : nome){
        switch(lettera){
    case 'a': x++;break;
    case 'e': x++;break;
    case 'i': x++;break;
    case 'o': x++;break;
    case 'u': x++;break;
        }
             }
         cout<<"in "<<nome<<" ci sono "<<x<<" vocali"; break;
        
case 2 : 
cout<<"inserire la frase "<<endl;

 getline(cin, frase);
 
 
 
 

int x=0;
for(char lettera : frase){
        switch(lettera){
    case 'a': x++;break;
    case 'e': x++;break;
    case 'i': x++;break;
    case 'o': x++;break;
    case 'u': x++;break;
        }
}
cout<<"in "<<nome<<" ci sono "<<x<<" vocali";break; 

}
 return 0;

}