#include <bits/stdc++.h>
using namespace std;
const int maxi=50405;

int main(){
    int k,p; cin>>k>>p; vector<bool>vis(maxi); vector<int>r(p); vis[0]=1;
    for (auto& i:r) cin>>i;
    for (int i=0; i<maxi; i++){
        if (vis[i]){
            for (int j=0; j<p; j++) if (i+r[j]<maxi) vis[i+r[j]]=1;
        }
    }
    vector<int>res(maxi+1);
    for (int i=maxi-1; i>=0; i--) vis[i] ? res[i]=i : res[i]=res[i+1];
    while(k--){
        int u; cin>>u;
        cout<<abs(u-res[u])<<endl;
    }
}