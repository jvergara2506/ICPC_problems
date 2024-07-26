#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin>>n; vector<vector<pair<ll,ll>>>adj(200005);
    for (ll i=1; i<n; i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back({v,i}); adj[v].push_back({u,i});
    }
    ll maxi=0;
    for (ll i=1; i<n; i++){
        ll t=adj[i].size();
        maxi=max(maxi, t);
    }
    vector<ll>vis(200005); vector<vector<ll>>ar(maxi);
    queue<ll>q; queue<ll>day;
    q.push(1); day.push(0); vis[1]=true;
    while (!q.empty()){
        ll s=q.front(), num=day.front(); q.pop(); day.pop();
        num=(num+1)%maxi;
        for (auto x:adj[s]){
            if (vis[x.first]) continue;
            vis[x.first]=true;
            ar[num].push_back(x.second);;
            day.push(num);
            q.push(x.first);
            num=(num+1)%maxi;
        }
    }
    cout<<maxi<<endl;
    for (auto& x:ar){
        cout<<x.size()<<" ";
        for (auto& y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}