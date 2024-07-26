#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll x, t=1; cin>>x;
    while (t<=x) t*=2;
    t/=2;
    ll b=x-t;
    vector<ll>ans;
    ans.push_back(x);
    for (ll i=0; i<31; i++){
        if ((b&(1<<i))!=0){
        x-=1<<i; ans.push_back(x);
        }
    }
    while (x>1){
        x/=2; ans.push_back(x);
    }
    cout<<ans.size()<<endl;
    for (ll i:ans) cout<<i<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}