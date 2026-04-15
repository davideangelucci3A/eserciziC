#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, i=1;
    cout<<"inserire un numero ";
    cin>>n;
    do{
        if(n%i==0){
            cout<<i<<" è divisore di "<<n<<endl;
        }
        i++;
    }while(i<=n);
    return 0;
}