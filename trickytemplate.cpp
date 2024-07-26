#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin>>n; string a,b,c; cin>>a>>b>>c;
    for (int i=0; i<n; i++){
        if (a[i]!=c[i] && b[i]!=c[i]){
            cout<<"YES"<<endl; return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while (t--) solve();
}