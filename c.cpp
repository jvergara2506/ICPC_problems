#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll d(ll a, ll b){
    ll s=0;
    for (ll i=1; i<=sqrt(a); i++){
        if (a%i==0 && i<=b) s++;
        if ((a%(a/i))==0 && (a/i)<=b && (a/i)!=i) s++;
    }
    return s;
}

void solve(){
    ll n,k; cin>>n>>k;
    ll ans=d(k-1, min(n,k/2));
    if (k==1) ans=n;
    else if (n>=k-1) ans++;
    cout<<ans<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}