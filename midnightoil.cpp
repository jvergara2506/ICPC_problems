#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k; cin>>n>>k;
    ll l=1, r=n;
    while (l<=r){
        ll m=l+(r-l)/2;
        ll sum=m, div=m, p=1;
        while (div>0){
            div=m/(k*p);
            sum+=div; p*=k;
        }
        if (sum<n) l=m+1;
        if (sum>=n) r=m-1;
    }
    cout<<r+1<<endl;
}