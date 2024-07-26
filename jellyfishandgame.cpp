#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,m,k, sum=0; cin>>n>>m>>k;
    vector<ll>j; vector<ll>g;
    for (ll i=0; i<n; i++){
        int v; cin>>v; j.push_back(v); sum+=v;
    }
    for (ll i=0; i<m; i++){
        int v; cin>>v; g.push_back(v);
    }
    if (k%2!=0) k=3;
    else k=4;
    for (int i=1; i<=k; i++){
        sort(j.begin(), j.end()); sort(g.begin(), g.end());
        if (i%2!=0 && j[0]<g[m-1]){
            swap(j[0], g[m-1]); sum=0;
            for (ll num:j) sum+=num;
        }
        else if (i%2==0 && g[0]<j[n-1]){
            swap(g[0], j[n-1]); sum=0;
            for (ll num:j) sum+=num;
        }
    }
    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}