#include<iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;

int main(){
    int n;
    cout<<"inserire il numero "<<endl;
    cin>>n;
    if(n>0){
        cout<<"la radice quadrata del numero è"<<sqrt(n);
    }else{
        cout<<"numero non valido";
    }

}