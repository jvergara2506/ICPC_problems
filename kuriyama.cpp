#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,sum=0; cin>>n; vector<ll>v(n+1),ps(n+1),sps(n+1); v[0]=0; ps[0]=0;
    for (ll i=1; i<n+1; i++) cin>>v[i];
    for (ll i=0; i<n+1; i++){
        sum+=v[i]; ps[i]=sum;
    }
    sort(v.begin(),v.end());
    for (ll i=0; i<n+1; i++){
        sum+=v[i]; sps[i]=sum;
    }
    ll q; cin>>q;
    while (q--){
        ll t,l,r; cin>>t>>l>>r;
        if (t==1) cout<<ps[r]-ps[l-1]<<endl;
        else cout<<sps[r]-sps[l-1]<<endl;
    }
}