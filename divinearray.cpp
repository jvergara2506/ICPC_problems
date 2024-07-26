#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef pair<ll,ll> pll;
typedef map<ll,ll> mll;
typedef vector<vll> mat;
typedef unordered_map<ll,ll> umll;
typedef set<ll> sll;
typedef unordered_set<ll> usll;
typedef vector<vll> mat;

void solve(){
    ll n,q; cin>>n; vll v(n);
    for (auto &x:v) cin>>x;
    mat f(n+1, vll (n)); umll freq;
    for (int i=0; i<n; i++) f[0][i]=v[i];
    for (int i=0; i<n; i++) freq[v[i]]++;
    for (int i=1; i<=n; i++){
        for (int j=0; j<n; j++) f[i][j]=freq[f[i-1][j]];
        freq.clear();
        for (int j=0; j<n; j++) freq[f[i][j]]++;
    }
    cin>>q;
    while (q--){
        ll a,b; cin>>a>>b;
        if (b>n) cout<<f[n][a-1]<<endl;
        else cout<<f[b][a-1]<<endl;
    }
}

int main(){
    ll t; cin>>t; while (t--) solve();
}