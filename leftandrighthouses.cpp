#include <bits/stdc++.h>
using namespace std;
using ll=long double;

void solve(){
    ll n,sum=0; string a; cin>>n>>a; vector<ll>uni(n), und(n); vector<ll>res;
    for (ll i=0; i<n; i++){
        if (a[i]=='1') sum++;
        uni[i]=sum;
    }
    sum=0;
    for (ll i=n-1; i>=0; i--){
        if (a[i]=='1') sum++;
        und[i]=sum;
    }
    if (und[0]>=n-und[0]) res.push_back(0);
    for (ll i=0; i<n-1; i++){
        if (uni[i]<=i+1-uni[i] && und[i+1]>=n-i-1-und[i+1]) res.push_back(i+1);
    }
    if (uni[n-1]<=n-uni[n-1]) res.push_back(n);
    ll p=300000, ans=-1, nn=n; ll mit=nn/2;
    for (ll i=res.size()-1; i>=0; i--){
        p=min(p, abs(mit-res[i])); 
        if (p==abs(mit-res[i])) ans=res[i];
    }
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}