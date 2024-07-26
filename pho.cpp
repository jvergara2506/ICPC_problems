#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,u=0,c=0, cnt=0, res=0, ones=0, zeros=0; cin>>n; bool fguno=false, fgdos=false; ll mini=1e9;
    for (ll i=0; i<n; i++){
        string a; cin>>a; c=0; u=0;
        for (ll j=0; j<a.size(); j++){
            if (a[j]=='1') u++;
            else c++;
        }
        mini=min(mini,abs(c-u));
        if (u>=c) {fguno=true; ones++;} if (c>=u) {fgdos=true; zeros++;};
        res+=min(u,c); 
    }

    if (fguno && fgdos){
        cout<<res<<"\n";
        return 0;
    }

    if (res==0){
        cout<<res<<"\n";
        return 0;
    }

    res+=mini;
    cout<<res<<"\n";
}