#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, res=0; cin>>n; ll men=1e9, mens=1e9;
    while (n--){
        ll m; cin>>m;
        vector<ll>val;
        for (ll i=0; i<m; i++){
            ll v; cin>>v; val.push_back(v);
        }
        sort(val.begin(), val.end());
        men=min(val[0], men);

        mens=min(val[1], mens);
        res+=val[1];
    }
    cout<<res+men-mens<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}