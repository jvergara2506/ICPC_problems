#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, e=0; cin>>n; vector<ll>v(n);
    for (ll &i:v) cin>>i;
    for (int i=0; i<n; i++){
        if (v[i]==0){
            cout<<0<<endl; return;
        }
        else if(v[i]<0) e++;
    }
    if (e%2==0) cout<<1<<endl<<1<<" "<<0<<endl;
    else cout<<0<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}