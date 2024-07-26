#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k; cin>>n>>k; vector<pair<ll,ll>>a(n);
    for (ll i=0; i<n; i++){
        ll u; cin>>u; a[i].second=u;
    }
    for (ll i=0; i<n; i++){
        ll u; cin>>u; a[i].first=abs(u);
    }
    sort(a.begin(), a.end());
    ll sum=0;
    for (auto& [x,y]:a){
        sum+=y;
        if (sum>x*k){
            cout<<"NO"<<endl; return;
        }
    }
    cout<<"YES"<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}