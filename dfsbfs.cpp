#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100000];
vector<bool> vis(100000);
queue<int> q;

void dfs(int node){
    if (vis[node]) return;
    vis[node]=true;
    for (int x:adj[node]){
        dfs(x);
    }
}

void bfs(int node, vector<int>& distance){
    while(!q.empty()){
        int s=q.front(); q.pop();
        for (int x:adj[s]){
            if (vis[x]) continue;
            vis[x]=true;
            distance[x]=distance[s]+1;
            q.push(x);
        }
    }
}
 