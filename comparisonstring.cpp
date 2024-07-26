#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,res; cin>>n;
    string val; res=0;
    for (int i=0; i<n; i++){ 
        char v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n-1; i++){
        if(val[i]!=val[i+1]) res+=1;
    }
    if (res==0 || res==n-1) res+=-1;
    cout<<n-res<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}