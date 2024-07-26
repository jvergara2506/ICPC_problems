#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef unordered_map<ll,ll> umll;

void solve(){
    ll w,h,n; cin>>w>>h>>n;
    ll a=0, b=0;
    for (ll i=0; i<=14; i++){
        if (w%(1<<i)) break;
        else a=i;
    }
    for (ll i=0; i<=14; i++){
        if (h%(1<<i)) break;
        else b=i;
    }
    if ((1<<b)*(1<<a)>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}