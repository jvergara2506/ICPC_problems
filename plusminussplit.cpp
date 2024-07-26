#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a=0, e=0;; cin>>n;
    string s; cin>>s;
    for (int i=0; i<n; i++){
        if (s[i]=='+') a++;
        else e++;
    }
    cout<<abs(a-e)<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}