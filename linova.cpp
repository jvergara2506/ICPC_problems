#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<vector<ll>>adj(200005); vector<ll>vis(200005); vector<ll>dist(200005); vector<ll>res;

void dfs(ll node, ll depth){
    vis[node]=true; ll s=0;
    for (auto x:adj[node]){
        if (!vis[x]){
            dfs(x,depth+1);
            s+=dist[x]+1;
        }
    }
    dist[node]=s; res.push_back(dist[node]-depth);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k; cin>>n>>k; 
    for(ll i=1;i<n; i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    dfs(1,0);
    sort(res.rbegin(),res.rend());
    ll ans=0;
    for (ll i=0; i<n-k; i++) ans+=res[i];
    cout<<ans<<endl;
}