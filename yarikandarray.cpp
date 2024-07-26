#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n; cin>>n; vector<ll>a(n);
    for (auto& i:a) cin>>i;
    ll ans=a[0], mn=min(0LL,a[0]), sum=a[0];
    for (ll i=1; i<n; i++){
        if (abs(a[i] % 2)==abs(a[i-1]%2)){
            mn=0;sum=0;
        }
        sum+=a[i];
        ans=max(ans, sum - mn);
        mn=min(mn, sum);
    }
    cout<<ans<<endl;    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}