#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,s=0; cin>>n;
    for (ll i=1; i<=n; i++) s+=i*(2*i-1);
    cout<<s<<" "<<2*n<<endl;
    for (ll i=1; i<=2*n; i++){
        if (i&1){
            cout<<1<<" "<<ceil((i+0.0)/2)<<" ";
            for (ll j=n; j>0; j--) cout<<j<<" ";
        }
        else{
            cout<<2<<" "<<ceil((i+0.0)/2)<<" ";
            for (ll j=n; j>0; j--) cout<<j<<" ";
        }
        cout<<endl;
    }
}
  
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve();
}