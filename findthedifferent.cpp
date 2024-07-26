#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n; cin>>n; vector<ll>a(n); 
    for (auto& i:a) cin>>i;
    ll q; cin>>q;
    while (q--){
        ll l,r; cin>>l>>r; set<ll>num;
        for (ll i=l-1; i<r; i++){
            num.insert(a[i]);
            if (num.size()==2){
                for (auto& x:num){
                    cout<<x+1<<" ";
                }
                break; 
            }
        }
        if (num.size()<2) cout<<-1<<" "<<-1;
        cout<<endl;
        num.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}