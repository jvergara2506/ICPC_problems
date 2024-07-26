#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef unordered_map<ll,ll> umll;

void solve(){
    ll n; cin>>n; umll c;
    for (ll i=0; i<n; i++){
        ll a; cin>>a;
        c[a]++;
    }
    cout<<(c[1]%2==0 && ((c[2]%2==0) || (c[2]%2!=0 && c[1]))>0 ? "YES" : "NO")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}