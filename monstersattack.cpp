#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k, res=0; cin>>n>>k; vector<pair<ll,ll>>m(n+1);
    for (ll i=1; i<=n; i++) cin>>m[i].second;
    for (ll i=1; i<=n; i++){ 
        ll u; cin>>u; m[i].first=abs(u);
    }
    sort(m.begin(),m.end());
    for (ll i=1; i<=n; i++){
        if (k*(m[i].first-m[i-1].first)+res<m[i].second){
            cout<<"NO"<<endl; return;
        }
        res+=k*(m[i].first-m[i-1].first)-m[i].second;
    }
    cout<<"YES"<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}