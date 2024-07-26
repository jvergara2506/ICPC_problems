#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n; cin>>n; vector<vector<ll>>adj(n+1);
    for (ll i=1; i<n; i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v); adj[v].push_back(u);
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}