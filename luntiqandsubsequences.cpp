#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, u=0, d=0; long long c=0; unsigned long long sum=0; cin>>n;
    vector<int> val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v); sum+=val[i];
    }
    for (int i=0; i<n; i++){
        if (val[i]==0) c++;
        if (val[i]==1) u++;
    }
    if (u==0){
        cout<<0<<endl; return;
    }
    cout<<(1ULL<<c)*u<<endl;
}
int main(){
    int t; cin>>t;
    while (t--) solve();
}