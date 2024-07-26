#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    ll n,mini=1e6+5; cin>>n; set<ll>s;
    for (ll i=0; i<n; i++){
        ll p; cin>>p; mini=min(mini,p); 
        s.insert(p);
    }
    ll it=1, d=0;
    if (mini>1 || s.size()==1) cout<<"Alicius"<<endl;
    else{
        for (auto& i:s){
            if (it!=s.size() && it==i) d++;
            else break;
            it++; 
        }
        if (d&1) cout<<"Bobius"<<endl;
        else cout<<"Alicius"<<endl;
    }
}
