#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,ans=0,z=0; cin>>n; vector<ll>a(n);
    for (auto& i:a) cin>>i;
    for (ll i=0; i<n; i++){
        if (a[i]>z) ans+=a[i]-z;
        z=a[i];
    }
    cout<<ans-1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}