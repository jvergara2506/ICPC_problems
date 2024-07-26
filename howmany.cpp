#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<int> &groups, vector<bool> &visited, vector<int> &ans, set<int> &act){
    if(visited[node]) return;
    visited[node] = true;
    int g = groups[node];
    bool alr=false;
    if(act.find(g) != act.end()) alr = true;
    act.insert(g);
    ans[node] = act.size();
    for(int x:adj[node]){
        dfs(x, adj, groups, visited, ans, act);
    }
    if(!alr) act.erase(g);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    vector<vector<int>> adj(n);
    vector<int> parents(n), groups(n);
    int root;
    for(int i=0; i<n; i++){
        cin>>parents[i];
        parents[i]--;
        if(parents[i]==-1){
            root = i;
            continue;
        }
        adj[parents[i]].push_back(i);
        adj[i].push_back(parents[i]);
    }

    for(int &x:groups) cin>>x;
    vector<bool> visited(n);
    vector<int> ans(n);
    set<int> act;
    dfs(root, adj, groups, visited, ans, act);
    for(int x:ans) cout<<x<<" "; cout<<"\n";
}