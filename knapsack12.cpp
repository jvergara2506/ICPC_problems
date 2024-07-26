#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,W; cin>>n>>W; vector<ll>dp(W+1);
    for (ll item=0; item<n; item++){
        ll weight, value; cin>>weight>>value;
        for (ll wa=W-weight; wa>=0; wa--) dp[wa+weight]=max(dp[wa+weight],dp[wa]+value);
    }
    cout<<dp[W]<<endl; 
}