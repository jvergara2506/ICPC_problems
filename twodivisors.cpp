#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll mcd(ll a, ll b){
    while (b!=0){
        ll temp=b; b=a%b; a=temp;
    }
    return a;
}

void solve(){
    ll a,b; cin>>a>>b;
    if (b%a==0) cout<<b*b/a<<endl;
    else cout<<b*a/mcd(a,b)<<endl;
}

int main(){
    ll t; cin>>t;
    while (t--) solve();
}