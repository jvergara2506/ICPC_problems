#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, d=0; cin>>n; string a; cin>>a; ll res=0;map<char,ll>r;
    for (ll i=0; i<n; i++){
        if (r.count(a[i])<1) r[a[i]]++;
        res+=r.size();
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}