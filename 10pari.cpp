#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
    bool a=false;
    int x, n, i=0;
  
srand(time(0));


while(i<10){
    i++;
         n= rand() % 100 + 1 ;
    if(n%2==0){
        cout << n << " ";}
    
}
cout << endl;
return 0;
}