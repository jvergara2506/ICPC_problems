#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k, res1, res2; cin>>n>>k;
    res1=ceil((k+0.0)/n);
    res2=ceil((k+0.0)/n)+1;
    if (k>=n) cout<<res1<<endl;
    else if ((n%k)==0 || k==1) cout<<1<<endl;
    else cout<<res2<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}