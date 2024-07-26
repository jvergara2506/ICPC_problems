#include <bits/stdc++.h>
using namespace std;
using ull=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ull t; cin>>t; vector<ull>n(t); 
    for (auto x:n) cin>>x;
    ull q; cin>>q; vector<ull>h(q);
    for (auto& x:h) cin>>x;
    for (ull i=0; i<q; i++){
        ull l=0, r=t-1;
        while (l<=r){
            ull m=l+(r-l)/2;
            if (n[m]<=h[i]) l=m+1;
            if (n[m]>h[i]) r=m-1;
        }
        cout<<r<<endl;
        if (r-1>=0 && n[r-1]!=h[i]) cout<<n[r-1]<<" ";
        else cout<<"X ";
        if (l<t && n[l]!=h[i]) cout<<n[l];
        else cout<<"X";
        if (q>0) cout<<endl;
    }
}