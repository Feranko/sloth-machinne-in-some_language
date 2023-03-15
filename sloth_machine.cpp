#include<iostream>
#include<stdlib.h>
#define N 5
using namespace std;

int spin(){
    int ingresso = 0;
    int win = 0;
    int lose = 0;
    int a[N];
    int b[N];
    int c[N];
    cin>>ingresso;
    for(int e=0;e<ingresso;e++){
        cout<<"----------------"<<endl<<"spin number "<<e+1<<endl;
        for(int d=0;d<N;d++){
            a[d] = rand()%3;
            b[d] = rand()%3;
            c[d] = rand()%3;
            cout<<a[d]<<b[d]<<c[d]<<endl;
        }    
        if(a[4]==b[4]){
            if(b[4]==c[4]){
               cout<<"you win"<<endl;
               win = win + 1; 
            }
            else{
               cout<<"you lose"<<endl;
               lose=lose+1;
            }
        }
        else{
            cout<<"you lose"<<endl;
            lose = lose + 1;
        }
    }
    cout<<endl<<endl<<"you won for : "<<win<<" and you lose for : "<<lose<<endl;
}

int main(){
    while(1){    
        cout<<"how much spin you want to do : ";
        spin();
    }
    return 0;
}