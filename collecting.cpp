#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n, sum=0; cin>>n; vector<ll>a(n),b(n),c(n); map<ll,ll>ans;
    for (auto& i:a) cin>>i; c=a; sort(a.begin(),a.end());
    for (ll i=0; i<n; i++){
        b[i]=sum; sum+=a[i];
    }
    ans[a[n-1]]=n-1;
    for (ll i=n-2; i>=0; i--){
        if (b[i+1]>=a[i+1]) ans[a[i]]=ans[a[i+1]];
        else ans[a[i]]=i;
    }
    for (ll i=0; i<n; i++) cout<<ans[c[i]]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}