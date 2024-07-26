#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,p; cin>>n>>p; long long res=p, n2=n-1;
    vector<long long>val; 
    for (int i=0; i<n; i++){
        long long v; cin>>v; val.push_back(v);
    }
    vector<pair<long long,long long>>val2;
    for (int i=0; i<n; i++){
        long long w; cin>>w; val2.push_back(make_pair(min(w,p), val[i]));
    }
    sort(val2.begin(), val2.end());
    for (int i=0; i<n-1; i++){
        res+=min(n2, val2[i].second)*val2[i].first;
        n2-=min(n2, val2[i].second);
    }
    cout<<res<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}