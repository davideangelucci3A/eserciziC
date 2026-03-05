#include<iostream>
#include <string>
using namespace std;
int main(){
    int b,h;
cout<<"inserire la base di un rettangolo"<<endl;
cin>>b;
cout<<"inserire l'altezza"<<endl;
cin>>h;
if(b>0&&h>0){
    int area=h*b;  
    cout<<"l'area del rettangolo è "<<area<<endl;
}else{
cout<<"i dati inseriti sono errati";

}
}