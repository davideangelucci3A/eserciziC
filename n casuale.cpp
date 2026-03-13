#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
    bool a=false;
    int n;
    n = rand() % 50 + 1;
    do{
        int x=0;
      cout<<"inserire il numero"<<endl;
      cin>>x;
      if(x>n){cout<<"troppo alto"<<endl;
    }else if(x<n){cout<<"troppo basso"<<endl;
    }else{a=true;
    cout<<"numero corretto";
    }

    }while(a==false);
}