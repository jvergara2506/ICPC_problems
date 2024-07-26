#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll x,y,z,k, ans=0; cin>>x>>y>>z>>k;
    for (ll i=1; i<=x; i++){
        for (ll j=1; j<=y; j++){
            if (i*j<=k && (k/(i*j))*i*j==k && (k/(i*j))<=z) ans=max(ans,(x-i+1)*(y-j+1)*(z-(k/(i*j))+1));
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}