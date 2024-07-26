#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
typedef vector<ll> vll; 
typedef unordered_map<ll,ll> umll;

bool cp(umll b, ll i){
    for (auto &x:b){
        if (x.second%i) return false;
    }
    return true;
}

void solve(){
    ll n; cin>>n; vll c(n); umll b;
    for (auto &x:c) cin>>x;
    for (auto &x:c){
        for (ll i=0; i<30; i++){
            if (x&(1<<i)) b[i]++;
        }
    }
    for (ll i=1; i<=n; i++){
        if (cp(b,i)) cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}