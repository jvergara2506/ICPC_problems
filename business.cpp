#include <bits/stdc++.h>
 
using namespace std;
 
int n, m;
vector<vector<int>> qua;
vector<vector<int>> ac;
vector<vector<int>> vis;
set<int> stamps;
 
void dfs(int i, int j){
    if(i<0 || j<0 || i>=n || j>=m) return;
    bool alr;
    vis[i][j]=1;
    if(find(stamps.begin(), stamps.end(), qua[i][j]) != stamps.end()) alr = true;
    else alr = false;
    stamps.insert(qua[i][j]);
    if(stamps.size()<ac[i][j]){
        ac[i][j] = stamps.size();
        if (vis[i+1][j]!=1) dfs(i+1, j);
        if (vis[i][j+1]!=1) dfs(i, j+1);
        if (vis[i-1][j]!=1) dfs(i-1, j);
        if (vis[i][j-1]!=1) dfs(i, j-1);
    }
    if(!alr) stamps.erase(qua[i][j]);
}
 
int main(){
    cin>>n>>m;
    qua.assign(n, vector<int>(m));
    vis.assign(n, vector<int>(m,0));
    ac.assign(n, vector<int>(m, 20000));
    int rh, ch; cin>>rh>>ch; rh--, ch--;
    int rw, cw; cin>>rw>>cw; rw--, cw--;
 
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>qua[i][j];
    dfs(rh, ch);
    cout<<ac[rw][cw]<<"\n";
}