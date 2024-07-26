#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll mcd(ll a){
    ll x=1;
    if (a%2==0) x=a/2;
    else{ 
        ll div=a/3;
        if (div%2==0) div--;
        for (ll i=div; i>2; i-=2){
            if (a%i==0){
                x=i; break;
            }
        }
    }
    return x;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; ll res=t;
    while (t>1){
        t=mcd(t); res+=t;
    }
    cout<<res<<endl;
}