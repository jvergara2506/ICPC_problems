#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n,k,d; cin>>n>>k>>d; vector<ll>p(k); vector<vector<pair<ll,ll>>>adj(300005);  queue<ll>q; vector<bool>vis(300005);
    for (auto& x:p){
        cin>>x; q.push(x); vis[x]=true;
    }
    for (ll i=1; i<n; i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back({v,i}); adj[v].push_back({u,i});
    }
    vector<bool>ari(300005);
    vector<ll>kk;
    while (!q.empty()){
        ll s=q.front(); q.pop();
        for (auto x:adj[s]){
            if (vis[x.first]) continue;
            vis[x.first]=true;
            ari[x.second]=true;
            q.push(x.first);
        }
    } 
    vector<ll>ans;
    for (ll i=1; i<n; i++){
        if (!ari[i]) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for (auto& x:ans) cout<<x<<" ";
    cout<<endl;
}