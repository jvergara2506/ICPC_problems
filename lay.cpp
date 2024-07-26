#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, m; cin>>n>>m;
    vector<ll> nums(n), pre(n+1);
    pre[0] = 0;
    for(ll i=0; i<n; i++) {
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    for(ll i=0; i<n; i++) {
        pre[i+1] = pre[i] + nums[i];
    }

    while(m--){
        ll q; cin>>q;
        if(q>=nums[n-1]){
            cout<<pre[n]<<"\n";
            continue;
        }
        auto it = upper_bound(nums.begin(), nums.end(), q);
        ll l = it-nums.begin();
        ll ans = pre[l] + (n-l)*q;
        cout<<ans<<"\n";
    }
}