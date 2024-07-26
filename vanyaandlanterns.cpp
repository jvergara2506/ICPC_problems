#include <bits/stdc++.h>
using namespace std;
using ll=long double;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,lo,sep=0; cin>>n>>lo; vector<ll>s(n);
    for (auto& x:s) cin>>x;
    sort(s.begin(),s.end());
    for (ll i=0; i<n-1; i++) sep=max(sep,s[i+1]-s[i]);
    ll dif=max(s[0],lo-s[n-1]);
    cout<<setprecision(20)<<max(dif,sep/2);
}