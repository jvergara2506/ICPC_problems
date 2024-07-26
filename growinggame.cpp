#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a=1; int b=3; int ca=4; int cb=5; 
    int i=4; int j=6; int ci=5; int cj=6;
    if (n==1) cout<<"Jane";
    while (a<n){
        if (n>a && n<i) cout<<"John";
        if (n>b && n<j) cout<<"Jane";
        a+=ca; b+=cb; i+=ci; j+=cj;
        ca+=2; cb+=2; ci+=2; cj+=2;
    }   
}