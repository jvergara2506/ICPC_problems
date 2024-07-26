#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, c, l=1, r=1e9; cin>>n>>c;
    vector<ll>val(n);
    for (ll i=0; i<n; i++) cin>>val[i];
    while (l<=r){
        ll m=l+(r-l)/2;
        ll sum=0;
        for (int i=0; i<n; i++){
            sum+=(val[i]+2*m)*(val[i]+2*m);
            if (sum>c){
                r=m-1;
                break;
            }
        }
        if (sum==c){
            cout<<m<<endl; return;
        }
        if (sum<c) l=m+1;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}