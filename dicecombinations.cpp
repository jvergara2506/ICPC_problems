#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;

int main(){
    ll n; cin>>n;
    vector<ll>sum(n+7);
    sum[0]=1;sum[1]=1; sum[2]=2; sum[3]=4; sum[4]=8; sum[5]=16;
    if (n>5){
        for (ll i=6; i<=n; i++){
            sum[i]=(sum[i-1]+sum[i-2]+sum[i-3]+sum[i-4]+sum[i-5]+sum[i-6])%mod;
        }
    }
    cout<<sum[n]<<endl;
}