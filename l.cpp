#include <bits/stdc++.h>
using namespace std;
vector<bool>vis(1e6+10,false);
vector<int>adj(1e6+10);

int dfs(int a, int sum){
    vis[a]=true;
    if (!vis[adj[a]]){
        return dfs(adj[a],sum+1);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,ans=0; cin>>n; 
    for (int i=0; i<2; i++){
        vis.assign(vis.size(),false);
        adj.clear();
        for (int j=1; j<=n; j++){
            cin>>adj[j];
            if (adj[j]==j) vis[j]=true;
        }
        for (int k=1; k<=n; k++){
            if (!vis[k]) ans+=dfs(k,0);
        }
    }
    cout<<ans<<endl;
}