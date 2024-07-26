#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,f,k; cin>>n>>f>>k; vector<int>v(n);
    for (auto& i:v) cin>>i;
    int fav=v[f-1], rp=0;
    sort(v.rbegin(), v.rend());
    for (int i=0; i<k; i++){
        if (v[i]==fav) rp++; 
    }
    if (rp==0) cout<<"NO"<<endl;
    else if (k!=n && v[k]==fav) cout<<"MAYBE"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}