#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; vector<int>m(n); map<int, int>b; set<int>c;
    for (int i=0; i<n; i++){
        cin>>m[i]; b[m[i]]++; c.insert(m[i]); c.insert(m[i]+1);
    }
    int res=0, l=0;
    for (auto i:c){
        int k=b[i];
        res+=max(0, k-l);
        l=k;
    }
    cout<<res<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}

