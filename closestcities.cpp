#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin>>n; vector<ll>v(n);
    for (ll &i:v) cin>>i;
    vector<ll>g(n); g[0]=0; g[1]=1;
    for (int i=1; i<n-1; i++) g[i+1]= v[i+1]-v[i]<v[i]-v[i-1] ? g[i]+1 : g[i]+v[i+1]-v[i];
    vector<ll>r(n); r[n-1]=0; r[n-2]=1;
    for (int i=n-2; i>=1; i--) r[i-1]= v[i]-v[i-1]<v[i+1]-v[i] ? r[i]+1 : r[i]+v[i]-v[i-1];
    ll q; cin>>q;
    while (q--){
        ll a,b; cin>>a>>b;
        cout<<(b>a ? g[b-1]-g[a-1] : r[b-1]-r[a-1])<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}