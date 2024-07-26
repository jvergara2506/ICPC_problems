#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,m,ans=0; cin>>n>>m; vector<ll>cnt(n+1);
    for(ll i=0; i<m; i++){
        ll u,v; cin>>u>>v;
        cnt[min(u,v)-1]++; 
    }
    for (ll j=0; j<n; j++) ans+=!cnt[j];
    ll q; cin>>q;
    for (ll i=0; i<q; i++){
        ll tq,u,v; cin>>tq;
        if (tq==1){
            cin>>u>>v;
            if (cnt[min(u,v)-1]==0) ans--; cnt[min(u,v)-1]++;
        }
        if (tq==2){
            cin>>u>>v;
            if (cnt[min(u,v)-1]==1) ans++; cnt[min(u,v)-1]--;
        }
        if (tq==3) cout<<ans<<endl;
    }
}