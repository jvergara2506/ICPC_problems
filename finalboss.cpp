#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll h,n,sumw; cin>>h>>n; vector<ll>a(n),c(n); set<pair<ll,ll>>s;
    for (auto& i:a) cin>>i;
    for (auto& i:c) cin>>i;
    for (ll i=0; i<n; i++){
        s.insert({1,i});
    }
    ll lt=1;
    while (h>0){
        auto [turn,i]=*s.begin();
        s.erase(s.begin());
        h-=a[i];
        lt=turn;
        s.insert({c[i]+turn,i});
    }
    cout<<lt<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    ll t; cin>>t; while (t--) solve();
}