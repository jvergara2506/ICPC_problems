#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1000000007;

unordered_map<ll, ll> adji(unordered_map<ll, ll> &freq, vector<vector<ll>> &adj){
    unordered_map<ll, ll> ret;
    for(auto &x:freq){
        ll i = x.first;
        for(ll x:adj[i]){
            (ret[x]+=freq[i])%=mod;
        }
    }

    return ret;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, k;
    cin>>n>>m>>k;
    vector<vector<ll>> adj(n+1);
    for(ll i=0; i<m; i++){
        ll u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<ll, ll> freq;
    freq[1] = 1;

    for(int i=0; i<k; i++){
        freq = adji(freq, adj);
    }

    ll ans = 0;

    for(auto &i:freq) (ans+=i.second)%=mod;
    cout<<ans<<"\n";
}