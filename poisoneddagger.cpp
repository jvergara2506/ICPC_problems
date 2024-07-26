#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,h; cin>>n>>h;
    vector<ll>a(n);
    for (ll &i:a) cin>>i;
    ll l=1, r=h;
    while (l<=r){
        ll m=l+(r-l)/2; ll sum=m;
        for (int i=0; i<n-1; i++) sum+=min(m, a[i+1]-a[i]);
        if (sum<h) l=m+1;
        else r=m-1;
    }
    cout<<r+1<<endl;



}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}