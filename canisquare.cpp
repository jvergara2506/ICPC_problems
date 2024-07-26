#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, s=0; cin>>n;
    vector<int>c(n);
    for (int i=0; i<n; i++){
        cin>>c[i]; s+=c[i];
    }
    if (floor(sqrt(s))==sqrt(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}