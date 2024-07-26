#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m,k,ca=0,cb=0; cin>>n>>m>>k; vector<ll>a(n),b(m); set<ll>num, num2;
    for (auto& i:a) cin>>i;
    for (auto& i:b) cin>>i;
    for (ll i=0; i<n; i++){
        if (a[i]<=k && num.find(a[i])==num.end()){
            ca++; num.insert(a[i]);
        }
    }
    for (ll i=0; i<m; i++){
        if (b[i]<=k && num2.find(b[i])==num2.end()){
            cb++; num2.insert(b[i]);
        }
    }
    num.insert(num2.begin(), num2.end());
    if (ca>=k/2 && cb>=k/2 && num.size()>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}