#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef unordered_map<ll,ll> umll;

void solve(){
    ll n; cin>>n; vll a(n); 
    for (auto &x:a) cin>>x;
    sort(a.rbegin(), a.rend());
    ll al=0, bo=0;
    for (ll i=0; i<n; i++){
        if (i%2==0 && a[i]%2==0) al+=a[i];
        else if (i%2!=0 && a[i]%2!=0) bo+=a[i];
    }
    if (al>bo) cout<<"Alice"<<endl;
    else if (al<bo) cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}