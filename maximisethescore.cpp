#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,sum=0; cin>>n; vector<ll>v(2*n);
    for (auto& i:v) cin>>i;
    sort(v.begin(),v.end());
    for (ll i=2*n-2; i>=0; i-=2){
        sum+=v[i];
    }
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}