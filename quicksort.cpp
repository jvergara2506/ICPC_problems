#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, a,res; cin>>n>>k;
    vector<int> val;
    val.push_back(0); res=0; a=1;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=1; i<=n; i++){
        if (val[i]==i) res+=1;
        if (res==n){
            cout<<0<<endl; return;
        } 
    }
    for (int i=1; i<=n; i++){
        if (val[i]==a) a+=1;
    }
    cout<<ceil(((n-a+1)+0.0)/k)<<endl;
}
int main(){
    int t; cin>>t;
    while (t--) solve();
}