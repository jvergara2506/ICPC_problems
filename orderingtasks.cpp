#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>adj(105);
vector<bool>vis(105);
vector<int>ans;

void dfs(int n){
    vis[n]=true;
    for (auto x:adj[n]){
        if (!vis[x]) dfs(x);
    }
    ans.push_back(n);
}

int main(){
    int n,m;
    while (cin>>n>>m && n!=0){
        vis.assign(vis.size(),false);
        ans.clear(); adj.clear();
        for (int i=0; i<m; i++){
            int u,v; cin>>u>>v; 
            adj[u].push_back(v);
        }
        for (int i=1; i<=n; i++){
            if (!vis[i]){
                dfs(i);
            }
        }
        reverse(ans.begin(),ans.end());
        for (auto x:ans) cout<<x<<" ";
        cout<<endl;
    }
}