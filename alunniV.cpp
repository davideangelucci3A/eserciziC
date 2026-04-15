#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main() { 
    int n=10, contam=0, ins=0;
    int vet[n];
    int ins1[n];
    double m[n];
    for(int i=0;i<n;i++){
         vet[i]=i+1;
            cout<<"inserire il totale dei voti dell'alunno "<<vet[i]<<": ";
            int x, ins2=0;
            double media=0, somma=0;
            cin>>x;
            int voti[x];
            for(int j=0;j<x;j++){
                cout<<"inserire il voto ";
                cin>>voti[j];
             somma=voti[j]+somma;
             if(voti[j]<6){ ins++;
            ins2++;}
            }
            ins1[i]=ins2;
            media=somma/x;
            if(media<6){contam++;}
            m[i]=media;
            
            
    }
    for(int i=0;i<n;i++){
        cout<<"alunno numero "<<vet[i]<<"|media: "<<m[i]<<"| numero insufficienze "<<ins1[i]<<endl;

    }
    cout<<"il numero di alunni con una media inferiore al 6 è "<<contam<<" e il totale delle insufficienze è "<<ins;
    return 0;
}