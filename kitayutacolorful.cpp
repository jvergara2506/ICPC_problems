#include <bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>>adj(105);
vector<bool>vis(105);

bool dfs(int u, int v, int c){
    vis[u]=true;
    if (u==v) return true;
    for (auto& x:adj[u]){
        if (!vis[x.first] && x.second==c){
            if (dfs(x.first,v,c)) return true;
        }
    }
    return false;
}

int main(){
    int n,m; cin>>n>>m;
    for (int i=1; i<=m; i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int q; cin>>q;
    while (q--){
        int u,v,sum=0; cin>>u>>v;
        for (int i=1; i<=m; i++){
            vis.assign(105,false);
            if (dfs(u,v,i)) sum++;
        }
        cout<<sum<<endl;
    }
}


