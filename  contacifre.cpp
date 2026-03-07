#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int conta=0;
    cout<<"inserire il numero di cui si vuole conoscere le cifre"<<endl;
    cin>>n;
for(char cifra : n){

conta++;
}
cout<<"il numero "<<n<<" contiene "<<conta<<" cifre.";
}