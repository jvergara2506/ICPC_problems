#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, x;
    cin>>n>>x;
    vector<ll> nums;
    set<ll> divi;
    for(ll i=0; i<n; i++){
        ll z; cin>>z;
        divi.insert(z);
    }

    for(ll z:divi) nums.push_back(z);
    ll nn = nums.size();
    ll ans = 0;

    
    for(uint32_t i = 1; i<1<<nn; i++){
        bitset<32> bs(i);
        ll s = 0;
        ll div = 1;
        vector<ll> fac;
        for(ll j = 0; j<nn; j++){
            if(bs[j]==1){
                s++;
                fac.push_back(nums[j]);
            }
        }

        bool out = false;

        for(ll &y:fac){
            div=lcm(div, y);
            if(div>x || div<0){
                out = true;
                break;
            }
        }

        if(out) continue;

        ll sum = x/div;
        if(s%2==1) ans+=sum;
        else ans-=sum;
    
    }

    cout<<ans<<"\n";
}