#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string a; cin>>a;
    ll na=0,nb=0;
    for (ll i=0; i<a.size();i++){
        if (a[i]=='A') na++;
        else nb++;
    }
    if (na>=nb) cout<<"A"<<endl;
    else cout<<"B"<<endl;

}

int main(){
    ll t; cin>>t; while (t--) solve();
}