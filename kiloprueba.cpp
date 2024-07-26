#include <bits/stdc++.h>
using namespace std;
const int maxi=50305;
vector<bool>vis(maxi);
vector<int>r;
 
void dfs(int n){
    if (n>=maxi || vis[n]) return;
    vis[n]=true; 
    for (int x:r){
        if (n+x<maxi) dfs(n+x);
    }
}
 
int main(){
    int k,p; cin>>k>>p;
    r.resize(p);
    for (auto& i:r) cin>>i;
    dfs(0);
    vector<int>res(maxi+1);
    for (int i=maxi-1; i>=0; i--){
        if (vis[i]) res[i]=i;
        else res[i]=res[i+1];
    }
    while(k--){
        int u; cin>>u;
        cout<<abs(u-res[u])<<endl;
    }
}