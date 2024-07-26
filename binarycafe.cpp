#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k; k=min(k, 30);
    cout<<min(1<<k, n+1)<<endl;
}

int  main(){
    int t; cin>>t;
    while (t--) solve();
}