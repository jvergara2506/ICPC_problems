#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, res=0; cin>>n;
    string a,b; cin>>a>>b;
    for (int i=0; i<n; i++){
        if (b[i]=='1' && a[i]=='0'){
            res++; a[i]=='2';
        }
        else if (b[i]=='1' && a[i-1]=='1'){
            res++; 
        }
        else if (b[i]=='1' && a[i+1]=='1'){
            res++; a[i+1]='2'; 
        }
    }
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin>>t; while (t--) solve();
}