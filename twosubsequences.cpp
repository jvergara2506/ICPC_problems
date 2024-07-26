#include <bits/stdc++.h>
using namespace std;

void solve(){
    string c; cin>>c; string s=c;
    sort(c.begin(), c.end());
    cout<<c[0]<<" ";
    s.erase(s.begin()+s.find(c[0]));
    cout<<s<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}