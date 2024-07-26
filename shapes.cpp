#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n; cin>>n; ll nu=0; set<ll>nums;
    for (ll i=0; i<n; i++){
        nu=0;
        string a; cin>>a;
        for (ll j=0; j<n; j++){
            if (a[j]=='1'){
                nu++;
            }
        }
        nums.insert(nu);
    }
    if (nums.size()>2) cout<<"TRIANGLE"<<endl;
    else cout<<"SQUARE"<<endl;


}

int main(){
    ll t; cin>>t; while (t--) solve();
}