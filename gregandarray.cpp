#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,m,k; cin>>n>>m>>k; vector<ll>v(n+5),l(m+5),r(m+5),d(m+5),cnt(m+5), dif(n+5);
    for (ll i=1; i<=n; i++) cin>>v[i];
    for (ll i=1; i<=m; i++) cin>>l[i]>>r[i]>>d[i];
    for (ll i=1; i<=k; i++){
        ll u,w; cin>>u>>w;
        cnt[u]++; cnt[w+1]--;
    }
    for (ll i=1; i<=m; i++){
        cnt[i]+=cnt[i-1];
        dif[l[i]]+=cnt[i]*d[i];
        dif[r[i]+1]-=cnt[i]*d[i];
    }
    for (ll i=1; i<=n; i++){
        dif[i]+=dif[i-1];
        cout<<v[i]+dif[i]<<" ";
    } 
    cout<<endl;
}