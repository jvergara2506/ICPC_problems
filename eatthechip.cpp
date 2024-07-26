#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll h,w,xa,ya,xb,yb; cin>>h>>w>>ya>>xa>>yb>>xb; ll d=yb-ya;
    if (d<=0){
        cout<<"Draw"<<endl; return;
    }
    ll ta=(d+1)/2, tb=d/2;
    ll la=max(1LL, xa-ta), ra=min(w, xa+ta), lb=max(1LL, xb-tb), rb=min(w, xb+tb);
    if (d%2==1) cout<<(la<=lb && ra>=rb ? "Alice" : "Draw")<<endl;
    else cout<<(lb<=la && rb>=ra ? "Bob" : "Draw")<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while (t--) solve();
}