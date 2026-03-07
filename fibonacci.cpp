#include<iostream>
#include <string>
using namespace std;
int main(){
  int n, somma=0, tot=0;
  cout<<"inserire le cifre della sequenza di fibonacci che si vogliono vedere"<<endl;
  cin>>n;
  cout<<somma<<endl;
     tot=1;
  for(int i=0;i<n;i++){
    cout<<somma<<endl;

    int c =somma+tot;
      somma=tot;
      tot=c;
  }

 return 0;
}