#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int> adj[100000];
vector<bool> vis(100000);

void dfs(int node){
    if (vis[node]) return;
    vis[node]=true;
    for (int x:adj[node]){
        dfs(x);
    }
}

void solve(){
    ll n; cin>>n; vector<pair<ll,ll>>t;
    for (ll i=0; i<n-1; i++){
        ll u,v; cin>>u>>v;t.push_back(make_pair(u,v));
    }
    ll q; cin>>q;
    while (q--){
        ll a1,a2; cin>>a1>>a2;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}