#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;

void solve(){
    ll n,k; cin>>n>>k; set<ll>fr,fc;
    for (ll i=1; i<=n; i++){
        fr.insert(i); fc.insert(i);
    }
    for (ll i=1; i<=k; i++){
        ll x,y; cin>>x>>y; fr.erase(x); fc.erase(x); fr.erase(y); fc.erase(y);
    }
    ll tam=fr.size(); vector<ll>ans(tam+1);
    ans[0]=1;
    for (ll i=1; i<=tam; i++){
        ans[i]+=ans[i-1]; ans[i]%=mod;
        if (i-2>=0){
            ll ot=(i-1)*(ans[i-2]); ot%=mod; ot*=2; ot%=mod; ans[i]+=ot; ans[i]%mod;
        }
    }
    cout<<ans[tam]<<endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}