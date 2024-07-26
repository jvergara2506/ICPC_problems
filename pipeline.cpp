#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k,j=1, sum; cin>>n>>k; ll res; ll mm;
    if ((k*(k+1)/2)+1-k<n) cout<<-1<<endl;
    else{
        ll l=0, r=k-1;
        while (l<=r){
            ll m=l+(r-l)/2;
            res=k+((k-2)*(k-1)/2)-((k-m-1)*(k-m)/2);
            if (res<=n) l=m+1;
            if (res>n) r=m-1;
            mm=m;
        }
        if (res<n) mm++;
        if (k+((k-2)*(k-1)/2)-((k-mm)*(k-mm+1)/2)>=n) mm--;
        cout<<mm<<endl;
    }
}