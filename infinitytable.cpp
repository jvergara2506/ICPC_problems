#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll k,r=1,c=1, s=0; cin>>k;
    for (ll i=0; i<=100000; i++){
        if ((i*i)>=k){
            s=i; break;
        }
    }
    for (int i=((s-1)*(s-1))+1; i<=(s*s)-s; i++){
        if (i==k){
            cout<<r<<" "<<s<<endl; return;
        }
        r++;
    }
    c=s;
    for (int i=s*s-s+1; i<=s*s; i++){
        if (i==k){
            cout<<s<<" "<<c<<endl; return;
        }
        c--;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}