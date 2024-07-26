#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll unos(ll n){
    bitset<100>bin(n);
    ll cnt=bin.count();
    return cnt;
}

void solve(){
    ll n, maxi=0, it, res, ans; cin>>n; vector<ll>a(n); 
    for (auto& x:a) cin>>x;
    for (ll i=n-1; i>=0; i--){
        maxi=max(maxi,a[i]);
        if (maxi==a[i]) it=i;
    }
    if (it==n-1) ans=(1LL<<a[n-1])-1-n;
    else{
        ll t=maxi-a[it+1], s=maxi-(t+1);
        if (s<0){
            cout<<-1<<endl; return;
        }
        res=(1LL<<s)-1; res<<=2; res|=(1LL<<t+1)-1;
        ans=bitset<100>(res).to_ullong()-it;
        if (ans<0){
            cout<<-1<<endl; return;
        }
        }
    ll ans2=ans;
    for (ll i=0; i<n; i++){
        ll f=unos(ans2);
        if (f!=a[i]){
            cout<<-1<<endl; return;
        }
        ans2++;
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}