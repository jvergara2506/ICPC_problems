#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll coins[]={15,10,6,3,1};

ll sol(ll n){
    vector<ll>a(n+1,INT_MAX);
    a[0]=0;
    for (ll i=1; i<=n; i++){
        for (ll j=0; j<5; j++){
            if (coins[j]<=n){
                ll t=INT_MAX;
                if (i-coins[j]>=0) t=a[i-coins[j]];
                if (t!=INT_MAX && t+1<a[i]) a[i]=t+1;
            }
        }
    }
    return a[n];
}

void solve(){
    ll n, ans=0; cin>>n;
    for (ll i=0; i<5; i++){
        if (n>=coins[i]){
            ll total=n/coins[i];
            ans=total-1;
            n%=coins[i];
            n+=coins[i];
            ans+=sol(n);
            cout<<ans<<endl;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}