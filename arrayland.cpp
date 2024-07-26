#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e4+100;

int main(){
    ll n; cin>>n; vector<ll>v(n); for (auto& i:v) cin>>i;
    vector<vector<ll>>dp(N,vector<ll>(N,10000));
    for (ll i=0; i<n; i++){
        for (ll j=0; j<n; j++){
            dp[i][j]=min({dp[i+1][j],dp[i][j+1],abs(v[i]-v[j])});
        }
    }
    ll q; cin>>q;
    while (q--){
        ll a,b; cin>>a>>b;a--;b--;
        cout<<dp[a][b]<<endl;
    }
}