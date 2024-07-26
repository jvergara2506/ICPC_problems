#include <bits/stdc++.h>
using ll=long long;
using namespace std;

void solve(){
    ll n,m,k, res=0; cin>>n>>m>>k; vector<ll>a(n), b(m); map<ll,ll>mp,mp2;
    for (auto &i:a) cin>>i; 
    for (ll i=0; i<m; i++){
        ll u; cin>>u; b[i]=u; mp[b[i]]++; 
    }
    ll cnt=0;
    for (ll i=0; i<m; i++){
        if(mp2[a[i]]<mp[a[i]]) cnt++;
        mp2[a[i]]++;
    }
    if (cnt>=k) res++;
    for (ll i=1; i+m<=n; i++){
        mp2[a[i-1]]--;
        if (mp2[a[i-1]]<mp[a[i-1]]) cnt--; 
        mp2[a[i+m-1]]++;
        if (mp2[a[i+m-1]]<=mp[a[i+m-1]]) cnt++;
        if (cnt>=k) res++;
    }
    cout<<res<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}