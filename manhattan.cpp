#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m,x=0,y=0, sum=0; cin>>n>>m;
    for (ll i=0; i<n; i++){
        string a; cin>>a;
        for (ll j=0; j<m; j++){
            if (a[j]=='#'){
                sum++;
                x+=i+1; y+=j+1;
            }
        }
    }
    cout<<x/sum<<" "<<y/sum<<endl;

}

int main(){
    ll t; cin>>t; while (t--) solve();
}