#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b,m,res=0; cin>>a>>b>>m; m++;
    res+=m/a+m/b;
    if (m%a) res++; if (m%b) res++;
    cout<<res<<endl;
}

int main(){
    ll t; cin>>t; while (t--) solve();
}