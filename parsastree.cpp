#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=100005;
ll l[N], r[N], f[N][2]; vector<vector<ll>>e(N); vector<bool>vis(N);

void dfs(ll u){
    f[u][0]=f[u][1]=0;
    vis[u]=true;
    for (auto x:e[u]){
        if (!vis[x]){
            dfs(x);
            f[u][0]+=max(f[x][0]+abs(l[u]-l[x]),f[x][1]+abs(l[u]-r[x]));
            f[u][1]+=max(f[x][0]+abs(r[u]-l[x]),f[x][1]+abs(r[u]-r[x]));
        }
    }
}

void solve(){
    ll n; cin>>n; vis.assign(N,false);
    for (ll i=1; i<=n; i++){
        cin>>l[i]>>r[i]; e[i].clear();
    }
    for (ll i=1, u,v; i<n; i++){
        cin>>u>>v; 
        e[v].push_back(u); e[u].push_back(v);
    } 
    dfs(1);
    cout<<max(f[1][0],f[1][1])<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while(t--) solve();
}