#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll power(ll b, ll p, ll m){
    ll res=1;
    b%=m;
    while (p>0){
        if (p&1) res=(res*b)%m;
        b=(b*b)%m;
        p/=2;
    }
    return res;
}

int main(){
    ll b,p,m; 
    while(cin>>b>>p>>m){
        cout<<power(b,p,m)<<endl;
    }
}