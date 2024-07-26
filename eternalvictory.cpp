#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dfs(ll node, vector<vector<pair<ll,ll>>>& ch, vector<ll>& sum){
    if (sum[node]==-1){
        sum[node]=0;
        for (auto x:ch[node]){
            sum[node]+=dfs(x.first, ch, sum);
            sum[node]+=x.second;
        }
    }
    return sum[node];
}

void distance(ll node, vector<vector<pair<ll,ll>>>& ch, vector<ll>& dist){
    if (node==0) dist[node]==0;
    for (auto x:ch[node]){
        dist[x.first]=dist[node]+x.second;
        distance(x.first, ch, dist);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n; 
    vector<ll>pa(n);
    vector<vector<pair<ll, ll>>>ch(n);
    vector<ll>sum(n, -1);
    for (ll i=0; i<n-1; i++){
        ll u,v,w; cin>>u>>v>>w;
        u--; v--;
        ch[min(u,v)].push_back({max(u,v),w});
    }
    vector<ll>dist(n,0);
    dfs(0, ch, sum);
    distance(0, ch, dist);
    cout<<sum[0]*2-*max_element(dist.begin(), dist.end())<<endl;
}

