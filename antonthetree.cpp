#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    ll n; cin>>n; vector<vector<ll>>adj(n); vector<bool>vis(n, false);
    for (ll i=1; i<n; i++){
        ll u,v; cin>>u>>v; 
        u--; v--;
        adj[u].push_back(v); adj[v].push_back(u);
    }

    ll k=2;
    for (ll i=1; i<n; i++){
        if (adj[i].size()==1) k++;
    }
    vector<ll>hoja(k, 0); 
    for (ll i=1; i<k-1; i++) {
        cin>>hoja[i];
        hoja[i]--;
    }
    queue<ll>q; vector<ll>dist(n);vector<ll>dist2(n); vector<ll>res; res.push_back(0);
    for (ll i=0; i<k-1; i++){
        q.push(hoja[i]);
        vis[hoja[i]]=true;
        while (!q.empty()){
            ll s=q.front(); q.pop();
            for (ll x:adj[s]){
                if (vis[x]) continue;
                vis[x]=true;
                dist[x]=dist[s]+1;
                q.push(x);
            }
        }
        vis.assign(n, false);
        q.push(hoja[i+1]);
        vis[hoja[i+1]]=true;
        while (!q.empty()){
            ll s=q.front(); q.pop();
            for (ll x:adj[s]){
                if (vis[x]) continue;
                vis[x]=true;
                dist2[x]=dist2[s]+1;
                q.push(x);
            }
        }
        
        while(res[res.size()-1]!=hoja[i+1]){
            ll s = res[res.size()-1];
            for(ll x:adj[s]){
                if(dist[x]+dist2[x]==dist[hoja[i+1]] && dist[x]==dist[s]+1){
                    res.push_back(x);
                    break;
                }
            }
        }

        vis.assign(n, false);
        dist.assign(n, 0);
        dist2.assign(n, 0);
    }
    if(res.size()!=2*n-1){
        cout<<"-1\n";
    }

    else{
        for(ll x:res) cout<<x+1<<" "; cout<<"\n";
    }
 }