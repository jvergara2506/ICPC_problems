#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,m, res=0; cin>>n>>m; vector<vector<ll>>adj(n+1);
    for (ll i=0; i<m; i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    vector<bool>vis(n+1);
    queue<ll>q;
    for (ll i=1; i<=n; i++){
        if (!vis[i]){
            ll n=1;
            q.push(i); vis[i]=true;
            bool cycle=true;
            while (!q.empty()){
                ll s=q.front(); q.pop();
                if (adj[s].size()<2) cycle=false;
                for (auto x:adj[s]){
                    if (vis[x]) continue;
                    n++;
                    vis[x]=true;
                    q.push(x);
                }
            }
            if (cycle && n%2) res++;
        }
    }
    if ((n-res)%2==1) res++;
    cout<<res<<endl;
}