#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m, ans=0; cin>>n; vector<ll>a(n),b(n); map<ll,ll>c;
    for (auto& i:a) cin>>i;
    for (auto& i:b) cin>>i;
    cin>>m; vector<ll>d(m);
    for (ll i=0; i<m; i++) {cin>>d[i]; c[d[i]]++;}
    for (ll i=0; i<n; i++) ans|=(b[i]==d[m-1]);
    for (ll i=0; i<n; i++){
        if (a[i]!=b[i]){
            if (d[b[i]]) d[b[i]]--;
            else ans=0;
        } 
    }
    cout<<(ans?"YES":"NO")<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}