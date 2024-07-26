#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll oo=1e9;

int main(){
    ll n,k; cin>>n>>k; vector<ll>v(n+1), mc(n+1, oo);
    for (ll i=1; i<=n; i++) cin>>v[i];
    mc[1]=0;
    for (ll i=2; i<=n; i++){
        for (ll j=i-1; j>=max(1LL,i-k); j--){
            mc[i]=min(mc[i],mc[j]+abs(v[i]-v[j]));
        }
    }
    cout<<mc[n]<<endl;
}