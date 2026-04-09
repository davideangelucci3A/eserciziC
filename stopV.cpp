#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
#include <vector>
using namespace std;

int main(){
    vector<string> v;
   int n=0, i=0;

string risposta;
do {
cout << "Inserisci la parola ";
cin >> risposta;
v.push_back(risposta); 
n++;
} while (risposta!="stop");


cout<<" ecco il vettore "<<endl;
while(i<n){
cout<<v[i]<<" ";
i++;


}
return 0;
}