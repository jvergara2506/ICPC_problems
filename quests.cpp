#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k,d=0,c=0,res=0,b2=0; cin>>n>>k; vector<ll>a(n),b(n);
    for (auto& i:a) cin>>i;
    for (auto& i:b) cin>>i;
    for (ll i=0; i<min(n,k); i++){
        b2=max(b[i],b2);
        d+=a[i]; c=(k-i-1)*b2;
        res=max(d+c,res);
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}