#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, X; cin >> n >> X;
    vector<vector<int>> edges(n+1);
    vector<int> dis(n+1);
    vector<bool> vis(n+1, false);

    for(int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    queue<int> q; 
    dis[1] = 0; vis[1] = true;
    q.push(1);
    ll ans = 0;

    while(!q.empty()){
        int curr = q.front(); q.pop();
        bool flag = true;
        for(auto it:edges[curr]){
            if(it == X) {flag = false; break;}
        }

        if(flag == false){
            ans += 2;
            dis[X] = dis[curr] + 1;
            vis[X] = true;
            continue;
        }

        for(auto it : edges[curr]){
            if(vis[it]) continue;
            ans += 2;
            vis[it] = true;
            dis[it] = dis[curr] + 1; 
            q.push(it);
        }
    }
    ans -= dis[X]; 
    cout << ans << '\n';
}


