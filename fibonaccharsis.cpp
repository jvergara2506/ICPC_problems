#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k, sum=0; cin>>n>>k;
    if (k-n>2){
        cout<<0<<endl; return;
    }
    for (int i=1; i<=n; i++){
        int u=n, pu=i; bool fb=true;
        for (int j=0; j<k-2; j++){
            int x=pu; pu=u-x; u=x;
            if (pu>u || u<0 || pu<0) fb=false; 
            if (!fb) break;
        }
        if (fb) sum++;
    }
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}