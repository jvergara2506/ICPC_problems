#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string n, p; ll d=0,ans=100; cin>>n;
    for (ll i=0; i<=60; i++){
        p=to_string(1LL<<i); ll k=0;
        for (ll j=0; j<n.size(); j++){
            if (n[j]==p[k]) k++;
        }
        d=p.size()+n.size()-2*k; ans=min(ans,d);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}