#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k, res=1; cin>>n>>k;
    string p; cin>>p;
    for (int i=0; i<n-1; i++){
        string g; cin>>g;
        if (g==p) res++;
    }cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}