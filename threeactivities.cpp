#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, ans1=0, ans2=0; cin>>n; vector<ll>a(n),b(n),c(n),ans(8);
    for (auto& i:a) cin>>i;
    for (auto& i:b) cin>>i;
    for (auto& i:c) cin>>i;
    for (ll i=0; i<n; i++){
        for (ll j=7; j>0; j--){
            if (j&1) ans[j]=max(ans[j], ans[j-1]+a[i]);
            if (j&2) ans[j]=max(ans[j], ans[j-2]+b[i]);
            if (j&4) ans[j]=max(ans[j], ans[j-4]+c[i]);
        }
    }
    cout<<ans[7]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}