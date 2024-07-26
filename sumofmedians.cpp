#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,sum,i,j; cin>>n>>k;
    vector<int> val; val.push_back(0);
    for (int i=0; i<n*k; i++){
        int v; cin>>v; val.push_back(v);
    }
    sum=0; i=0; j=k;
    while (j--){
        sum+=val[n*k-i-floor(n/2)];
        i+=floor(n/2)+1;
    }
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}