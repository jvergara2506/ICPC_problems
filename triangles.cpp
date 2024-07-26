#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1000000007;

int main(){
    int t; cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll ans = ((n+2)*(n+1)/2)%mod;
        ans = (ans*(k+1))%mod;
        cout<<ans<<"\n";
    }
}