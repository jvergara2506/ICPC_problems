#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;
#define rep(a, b) for (ll i = a; i < b; i++)
#define all(x) x.begin(), x.end()
 
void solve(){
    ll n; cin>>n; vll a(n); 
    rep(0,n) cin>>a[i];
    auto maxi=*max_element(all(a));
    ll res=1e9;
    rep(0,n){
        maxi=maxi&a[i];
        res=min(maxi, res);
    }
    cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while (t--) solve();
}