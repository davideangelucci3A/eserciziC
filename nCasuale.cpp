#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
    bool a=false;
    int x, n, i=0;
    n = rand() % 100 + 1;
    while(i<5){
       cout<<"inserire il numero"<<endl;
      cin>>x;
       if(x>n){cout<<"troppo alto"<<endl;
    }else if(x<n){cout<<"troppo basso"<<endl;
    }else{i=5; a=true;
    
    }
    i++;
    }
if(a=true){cout<<"hai vinto";}else{cout<<"hai perso, il numero era "<<n;}
}