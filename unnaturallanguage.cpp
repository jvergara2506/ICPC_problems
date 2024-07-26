#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,i=0; cin>>n; string a; cin>>a;
    while (i<n){
        if ((a[i]=='b' || a[i]=='c' || a[i]=='d') && (a[i+2]=='b' || a[i+2]=='c' || a[i+2]=='d') && (a[i+3]=='b' || a[i+3]=='c' || a[i+3]=='d' || i+3>=n)){
            cout<<a[i]<<a[i+1]<<a[i+2];i+=3;
        }
        else{
            cout<<a[i]<<a[i+1];i+=2;  
        }
        if(i<n) cout<<".";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin>>t; while (t--) solve(); 
}