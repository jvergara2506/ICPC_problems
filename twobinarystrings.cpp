#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a,b; cin>>a>>b;
    for (int i=0; i<a.size()-1; i++){
        if (a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1'){
            cout<<"YES"<<endl; return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}