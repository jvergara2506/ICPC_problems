#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, sum=0, ans=0, maxi=0; cin>>n;
    for (ll i=0; i<n; i++){
        ll a; cin>>a;
        sum+=a; maxi=max(maxi,a);
        if (sum-maxi==maxi) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}