#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, d=1, res=0; cin>>n;
    vector<long long> val; 
    for (int i=0; i<n; i++){
        long long v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        while (val[i]%2==0){
            val[i]/=2; d*=2;
        }
    }
    sort(val.begin(), val.end());
    val[n-1]*=d;
    for (int i=0; i<n; i++) res+=val[i];
    cout<<res<<endl;
    
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}