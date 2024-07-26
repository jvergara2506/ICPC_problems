#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, u=0, c=0; cin>>n; string p; cin>>p;
    for (ll i=1; i<n; i++){
        if (p[i-1]=='1'){
            u++; c=0;
        }
        else {
            c++; u=0;
        }
        int res=i+1-max(c,u);
        cout<<res<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}