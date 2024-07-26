#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t; cin>>t;
    ll cs[5]={1,2,6,10,15}; 
    vector<ll>res(1e7,1e9);
    res[0]=0;
    for (ll i=0; i<1e7; i++){
        for (ll j=0; j<5; j++){
            if (cs[j]>i) continue;
            res[i]=min(res[i],res[i-cs[j]]+1);
        }
    }
    while (t--){
        ll n; cin>>n;
        cout<<res[n]<<endl;
    }
}