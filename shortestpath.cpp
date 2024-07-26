#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,m,k; cin>>n,m,k; map<pair<ll,ll>, set<pair<ll,ll>>>adj;
    map<ll, set<pair<ll,ll>>>edg; edg[1].insert({1,1}); edg[n].insert({n,n});
    while (m--){
        ll u,v; cin>>u>>v; edg[u].insert({u,v}); edg[u].insert({v,u});
    }
    for (auto& x:edg){
        for (auto& y:x.second){
            if (y.second>=y.first){
                for (auto& z:edg[y.second]){
                    adj[y].insert(z); adj[z].insert(y);
                }
            }
        }
    }
    queue<pair<ll,ll>>q;
    map<pair<ll,ll>,ll>dist; map<pair<ll,ll>,ll>vis;
    for (auto& x:edg){
        for (auto& y:x.second){
            dist[y]=1e9;
        }
    }
    map<pair<ll,ll>,ll>vis;
    vis[{1,1}]=true; dist[{1,1}]=0; q.push({1,1});
    while (!q.empty()){
        pair<ll,ll> s=q.front(); q.pop();
        for (auto u:adj[s]){
            if (vis[u]) continue;
            vis[u]=true;
            dist[u]=dist[s]+1;
            q.push(u);
        }
    } 
}
