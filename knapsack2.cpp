#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,W; cin>>n>>W; vector<ll>weight(n), value(n);
    for  (ll i=0; i<n; i++){
        cin>>weight[i]>>value[i];
    }
    ll sv=0;
    for (auto& i:value) sv+=i;
    vector<ll>dp(sv+1, 1e18+10);                                      
    dp[0]=0;
    for (ll item=0; item<n; item++){
        for (ll va=sv-value[item]; va>=0; va--){
            dp[va+value[item]]=min(dp[va+value[item]],dp[va]+weight[item]);
        }
    }
    ll ans=0;
    for (ll i=0; i<=sv; i++){
        if (dp[i]<=W) ans=max(ans, i);
    }
    cout<<ans<<endl;
}