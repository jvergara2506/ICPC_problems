#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;
using vpll = vector<pll>;
#define rep(a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
 
void solve(){
    ll n, ans=0; cin>>n; vll a(n), m(n);
    rep(0,n) cin>>a[i]; m=a;
    for (ll i=n-1; i>=0; i--){
        m[i]=a[i]+(i+a[i]>=n ? 0 : m[i+a[i]]);
    }
    cout<<*max_element(all(m))<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while (t--) solve();
}