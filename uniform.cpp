#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll step,mod;
    while (cin>>step>>mod){
        cout<<setw(10)<<step<<setw(10)<<mod<<"    ";
        gcd(step,mod)==1 ? cout<<"Good Choice" : cout<<"Bad Choice";
        cout<<endl<<endl;;
    }
}