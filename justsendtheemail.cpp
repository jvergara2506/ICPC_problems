#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=998244353;

int inv(ll a){
    return a<=1 ? a : mod-(mod/a)*inv(mod%a)%mod;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n; 
    vector<vector<ll>>adj(100000);
    vector<bool>vis(100000);
    queue<ll>q;
    for (ll i=1; i<n; i++){
        ll v; cin>>v;
        adj[v].push_back(i+1);
        adj[i+1].push_back(v);
    }
    vector<ll>dist(n+1); ll sum=0;
    for (ll i=2; i<=n; i++){
        if (adj[i].size()==1){
            q.push(i); vis[i]=true;
        }
    }
    while (!q.empty()){
        ll s=q.front(); q.pop();
        for (ll x:adj[s]){
            if (vis[x]) continue;
            vis[x]=true;
            dist[x]=dist[s]+1;
            q.push(x);
        }
    }
    for (auto& i:dist) sum+=i;
    ll p=(sum+n)/gcd(sum+n,n), b=(n)/gcd(sum+n,n);
    cout<<p*inv(b)%mod<<endl;
}