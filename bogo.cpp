#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll mod = 1000000007;

long long inv(long long a, long long b){
 return 1<a ? b - inv(b%a,a)*b/a : 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<ll> fact(1000001);
    fact[0] = 1;
    for(ll i=1; i<=1000000; i++){
        fact[i] = i*fact[i-1];
        fact[i]%=mod;
    }

    ll n, k;
    cin>>n>>k;
    vector<ll> nums(n);
    map<ll, ll> freq;
    for(ll &x:nums){
        cin>>x;
        freq[x]++;
    }

    ll den=1;
    for(auto &x:freq){
        (den*=fact[x.second])%=mod;
    }

    ll ans = (den*inv(fact[n], mod))%mod;

    cout<<ans<<"\n";

    while(k--){
        ll pos, neu;
        cin>>pos>>neu; pos--;
        (ans*=(inv(freq[nums[pos]], mod)))%=mod;
        freq[nums[pos]]--;
        freq[neu]++;
        (ans*=(freq[neu]))%=mod;
        nums[pos]=neu;
        cout<<ans<<"\n";
    }
}