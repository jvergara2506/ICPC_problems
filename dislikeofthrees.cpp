#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, i=1, d=0, num=1; cin>>n;
    while (num<=n){
        if (i%3!=0 && i%10!=3){
            d=i; num++;
        }
        i++;
    }
    cout<<d<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}