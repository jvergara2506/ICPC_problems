#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b; cin>>a>>b;
    if (a%2==0 && b%2==0 || a%2!=0 && b%2!=0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}