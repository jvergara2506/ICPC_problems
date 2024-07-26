#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll a,b,c; cin>>a>>b>>c;
    if(a==b)cout<<c<<endl;
    else if(a==c)cout<<b<<endl;
    else cout<<a<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}