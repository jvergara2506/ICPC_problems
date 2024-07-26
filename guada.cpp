#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    vector<ll> space(n-1);
    vector<ll> sta(n);
    for(ll &x:space) cin>> x;
    for(ll &x:sta) cin>>x;
    vector<ll> rail(2*n-1);
    for(ll i=0; i<2*n-1; i++){
        if(i%2==0) rail[i]=sta[i/2];
        else rail[i] = space[i/2];
    }

    vector<ll> sufr(2*n-1), sufl(2*n-1);
    sufl[0] = rail[0];
    for(ll i = 1; i<2*n-1; i++){
        sufl[i] = sufl[i-1] + rail[i];
    }

    sufr[2*n-2] = rail[2*n-2];
    for(ll i = 2*n-3; i>=0; i--){
        sufr[i] = sufr[i+1] + rail[i];
    }

    ll ans = 0;
    for(ll i=0; i<2*n-1; i+=2){
        ans = max(ans, rail[i] - abs(sufl[i]-sufr[i]));
    }

    cout<<ans<<"\n";
}