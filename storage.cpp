#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n; string m;
    cin>>n>>m;
    ll pot = 1;
    ll mem = 0;
    for(int i=m.size()-2; i>=0; i--){
        mem+=(m[i]-'0')*1ll*pot;
        pot*=10;
    }

    if(m[m.size()-1]=='G') mem*=(1024);
    else if(m[m.size()-1]=='T') mem*=(1024)*(1024);

    vector<ll> nums(n);
    for(ll& x:nums) cin>>x;
    vector<ll> prefix(n+1, 0);
    for(int i=1; i<=n; i++) prefix[i] = prefix[i-1]+nums[i-1];
    if(prefix[n]<=mem){
        cout<<n<<" -1\n";
        return 0;
    }

    ll l=1, r=n-1;

    vector<ll> cant(n+1, -1);

    while(l<=r){
        ll m = l+(r-l)/2;
        bool can = true;
        for(ll i=m; i<=n; i++){
            if(prefix[i]-prefix[i-m]>mem){
                cant[m] = i-m+1;
                can = false;
                break;
            }
        }

        if(can) l = m+1;
        else r=m-1;
    }

    cout<<r<<" ";
    if(cant[l]!=-1){

    }

    else{
        for(ll i=l; i<=n; i++){
            if(prefix[i]-prefix[i-l]>mem){
                cant[l] = i-l+1;
                break;
            }
        }
    }

    cout<<cant[l]<<"\n";
}