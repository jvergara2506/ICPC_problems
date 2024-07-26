#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef unordered_map<ll,ll> umll;

void solve(){
    ll n, ans=0; cin>>n; umll v;
    for (ll i=0; i<n-1; i++){
        ll a, b; cin>>a>>b;
        v[a]++; v[b]++;
    }
    for (auto &x:v){
        if (x.second==1) ans++;
    }
    cout<<ceil((ans+0.0)/2)<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}