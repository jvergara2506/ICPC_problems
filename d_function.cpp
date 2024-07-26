#include <bits/stdc++.h>
using namespace std;
using ll=long long; 
const ll mod=1e9+7;

ll exp(ll x, ll y){
    ll res=1;
    x%=mod;
    if (x==0) return 0;
    while (y>0){
        if (y&1) res=(res*x)%mod;
        y/=2;
        x=(x*x)%mod;
    }
    return res;
}

int main(){
    ll t; cin>>t; 
    while (t--){
        ll l,r,k; cin>>l>>r>>k;
        cout<<(exp(9/k+1,r)-exp(9/k+1,l)+mod)%mod<<endl;
    }
}