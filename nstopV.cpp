#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
#include <vector>
using namespace std;

int main(){
    vector<string> v;
      int n=0, i=0, j;

string risposta;
do {
cout << "Inserisci la parola ";
cin >> risposta;
v.push_back(risposta); 
i++;
} while (risposta!="stop");

cout<<"inserire la lunghezza minima delle parole ";
cin>>j;
while(n<i-1){
    int  conta=0;
for(char cifra : v[n]){
    
conta++;
}
if(conta>=j){cout<<v[n]<<" ";}
n++;
}
return 0;
}