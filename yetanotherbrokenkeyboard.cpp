#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k, c=0; cin>>n>>k;
    string s; vector<char>l(k); vector<ll>pos;
    cin>>s;
    for (char &i:l) cin>>i;
    for (ll i=0; i<n; i++){
        if (find(l.begin(), l.end(), s[i])==l.end()) pos.push_back(i+1);
    }
    if (pos.empty()) cout<<(n*(n+1))/2<<endl;
    else if (pos.size()==s.size()) cout<<0<<endl;
    else{
        ll res=(n*(n+1))/2-pos[0]*(n-pos[0]+1);
        for (ll i=1; i<pos.size();i++) res-=(pos[i]-pos[i-1])*(n-pos[i]+1);
        cout<<res<<endl;
    }
}
