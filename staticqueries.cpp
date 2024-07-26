#include <bits/stdc++.h>    
using namespace std;
using ll=long long;
int main(){
    ll n,q; cin>>n>>q;
    vector<ll>num(n), pre(n+2); for (auto& i:num) cin>>i;
    pre[2]=num[0]; ll sum=num[0];
    for (ll i=3; i<n+3; i++){
        sum+=num[i-2]; pre[i]+=sum;
    }
    while (q--){
        ll u,v; cin>>u>>v;
        cout<<pre[v+1]-pre[u]<<endl;
    }
}