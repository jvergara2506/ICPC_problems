#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,f,a,b; cin>>n>>f>>a>>b;
    vector<ll>m; m.push_back(0);
    for (ll i=0; i<n; i++){
        ll v; cin>>v; m.push_back(v);
    }
    ll d=0;
    for (ll i=0; i<n; i++){
        if((m[i+1]-m[i])*a>b) d+=b;
        else d+=(m[i+1]-m[i])*a;
    }
    ll temp=f-d;
    if (temp>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while (t--) solve();
}