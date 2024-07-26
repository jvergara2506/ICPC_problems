#include <bits/stdc++.h>
using namespace std; 
using ll=long long;

void solve(){
    ll n,o=0, sum=0;cin>>n; vector<ll>a(n);
    for (auto& x:a) cin>>x;
    for (ll i=0; i<n; i++){
        if (a[i]%2!=0)o++;
        sum+=a[i];
        if (o%3==0 || o%3==2) cout<<sum-o/3<<" ";
        else cout<<(i==0 ? sum:sum-o/3-1)<<" ";
    }
    cout<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}