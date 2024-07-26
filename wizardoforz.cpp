#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, num=0; cin>>n;
    if (n>=1) cout<<9;
    if (n>=2) cout<<8;
    if (n>=3) cout<<9;
    if (n>=4){
        for(ll i=0; i<n-3; i++){
            cout<<num;
            num++;
            if (num==10) num=0;
        }
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}