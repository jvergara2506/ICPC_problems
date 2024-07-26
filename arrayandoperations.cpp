#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,k, d=1, sum=0, ig=0; cin>>n>>k;
    vector<ll>v(n);
    for (ll &i:v) cin>>i;
    sort(v.begin(), v.end(), greater<>());
    for (ll i=0; i<2*k-1; i+=1){
        if (v[i]==v[i+1]) d++;
        else d=1;
        ig=max(ig, d);
    }
    sum+=ig-k;
    if (k==0 || sum<0) sum=0;
    for (ll i=2*k; i<n; i++) sum+=v[i];
    cout<<sum<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}