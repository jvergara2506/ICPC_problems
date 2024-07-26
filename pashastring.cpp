#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string a; ll b; cin>>a>>b; vector<ll>v(b); map<ll,ll>m;
    for (auto& i:v) cin>>i;
    sort(v.begin(), v.end());
    for (ll i=0; i<b; i++) m[v[i]]++;
    vector<ll>par((a.size()/2)+1);
    for (auto& x:m) par[x.first]=x.second;
    for (ll i=1; i<par.size(); i++) par[i]+=par[i-1];
    for (ll i=1; i<par.size(); i++){
        if (par[i]&1) swap(a[i-1],a[a.size()-i]);
    }
    cout<<a<<endl;
}