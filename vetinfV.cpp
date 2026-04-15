#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main() {
vector<int> v;
   int n, i=0;
   double media=0, somma=0;


do {
    
cout << "Inserisci il numero ";
cin >> n;
if(n!=0){
v.push_back(n); 
somma=n+somma;
i++;}

} while (n!=0);
media=somma/i;
cout<<"la media del vettore è "<<media<<endl;
for(int j=0;j<i;j++){
    cout<<v[j]<<", ";
}
}