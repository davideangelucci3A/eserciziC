#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main(){
    int n=5;
    bool a=false;
    int v[n];
    int v2[n];
    cout<<"inserire i numeri del primo array"<<endl;
  for(int i=0;i<n;i++){
    cout<<"inserisci il numero ";
     cin>>v[i];
  }
      cout<<"inserire i numeri del secondo array"<<endl;
 for(int i=0;i<n;i++){
    cout<<"inserisci il numero ";
     cin>>v2[i];
  }
for(int i=0;i<n;i++){
    if(v[i]==v2[i]){
        cout<<"gli elementi nella posizione "<<i<<" sono uguali";
        a=true;
    }else{ cout<<"gli elementi nella posizione "<<i<<" sono diversi";
        a=false; }

}
if(a==true){cout<<"tutti i numeri dell'array sono uguali";
}
return 0;
}