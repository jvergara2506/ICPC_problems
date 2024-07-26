#include <bits/stdc++.h>
using namespace std;
using ll=long long;

struct act{
    ll a,b,c;
};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n; vector<act>v(n+1);
    for (ll i=1; i<=n; i++) cin>>v[i].a>>v[i].b>>v[i].c;
    vector<vector<ll>>dp(n+1,vector<ll>(3));
    dp[1][0]=v[1].a; dp[1][1]=v[1].b; dp[1][2]=v[1].c;
    for (ll i=2; i<=n; i++){
        dp[i][0]=v[i].a+max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=v[i].b+max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=v[i].c+max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max({dp[n][0],dp[n][1],dp[n][2]});
}