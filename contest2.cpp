#include <bits/stdc++.h>
using ll=long long;
using namespace std;

ll sunk(ll n,ll k, vector<ll>&a){
    ll tot=2LL*k;
    ll fs=0, ls=0;
    for (ll i=0; i<n && tot>0; ++i){;
        ll at=min(a[i],(ll)tot/2);
        fs+=at; tot-=at*2;
    }
    if (tot>0){
        ls=min((ll)tot/2,a[n-1]);
    }
    return fs-ls;
}

int main(){
    ll t; cin>>t;
    while (t--){
        ll n,k; cin>>n>>k; vector<ll>a(n);
        for (auto& i:a) cin>>i;
        cout<<sunk(n,k,a)<<endl;
    }
}