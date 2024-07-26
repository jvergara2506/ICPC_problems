#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, maxi=0, mini=0; cin>>n; string a; cin>>a;
    for (ll i=0; i<n; i++){
        if (a[i]=='B'){
            mini=i; break;
        }
    }
    for (ll i=n-1; i>=0; i--){
        if (a[i]=='B'){
            maxi=i; break;
        }
    }
    cout<<maxi-mini+1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}