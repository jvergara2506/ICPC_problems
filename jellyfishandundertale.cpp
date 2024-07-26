#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,n,res; cin>>a>>b>>n;
    vector<int> val; res=b;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        if (val[i]+1<=a) res+=val[i];
        if (val[i]+1>a) res+=a-1;
    }
    cout<<res<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}