#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n; cin>>n; vector<ll>a(n); map<char,ll>le;
    for (auto& i:a) cin>>i;
    string b="abcdefghijklmnopqrstuvwxyz";
    for (ll i=0; i<n; i++){
        for (ll j=0; j<b.size(); j++){
            if (le[b[j]]==a[i]){
                cout<<b[j]; le[b[j]]++; break;
            }
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}