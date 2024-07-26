#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>adj, capacity; 
int n,m;

int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INT_MAX});
    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(n+m+2);
    int new_flow;
    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

int main(){
    cin>>n>>m; adj.assign(n+m+2,vector<int>()); capacity.assign(n+m+2,vector<int>(n+m+2,1));
    for (int i=1; i<=n; i++){
        int k; cin>>k; adj[0].push_back(i); adj[i].push_back(0);
        for (int j=0; j<k; j++){
            int p; cin>>p; adj[i].push_back(p+n); adj[p+n].push_back(i); 
        }
    }
    for (int i=n+1; i<=n+m; i++){
        adj[i].push_back(n+m+1); adj[n+m+1].push_back(i);
    }
    cout<<m-maxflow(0,n+m+1)<<endl;
}