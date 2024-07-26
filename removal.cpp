#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,maxi=0, res=0; string a; cin>>n>>a; map<char,ll>f;
    for (ll i=0; i<n; i++) f[a[i]]++;
    for (auto& x:f){
        if (x.second>maxi) maxi=x.second;
    }
    if (maxi-(n-maxi)<=0){
        if (n%2!=0) res=1; 
        else res=0;
    }
    else res=maxi-(n-maxi);
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}