#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n; cin>>n; vector<ll>v(n+1), mc(n+1);
    for (ll i=1; i<=n; i++) cin>>v[i];
    mc[2]=abs(v[2]-v[1]);
    for (ll i=3; i<=n; i++){
        mc[i]=min(mc[i-1]+abs(v[i]-v[i-1]),mc[i-2]+abs(v[i]-v[i-2]));
    }
    cout<<mc[n]<<endl;
}