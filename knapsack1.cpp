#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<vector<ll>>dp(105,vector<ll>(1e5+10));

ll ks(ll n, ll w, vector<ll>p, vector<ll>v){
    for (ll i=1; i<=n; i++){
        for (ll j=1; j<=w; j++){
            if (p[i-1]<=j) dp[i][j]=max(v[i-1]+dp[i-1][j-p[i-1]], dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][w];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,w; cin>>n>>w; vector<ll>p(n),v(n);
    for (ll i=0; i<n; i++) cin>>p[i]>>v[i];
    cout<<ks(n,w,p,v)<<endl;
}