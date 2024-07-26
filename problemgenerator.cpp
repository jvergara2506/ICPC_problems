#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m, res=0; cin>>n>>m; string a; cin>>a; map<char, int>c;
    for (int i=0; i<n; i++) c[a[i]]++;
    res+=(7-c.size())*m;
    for (auto& i:c) if (i.second<m) res+=m-i.second;
    cout<<res<<endl;
}

int main(){
    int n; cin>>n; while (n--) solve();
}