#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    int s = 0;
    for(int i=1; i<=n; i++) s+= i*(2*i-1);
    int m = 2*n;
    cout<<s<<" "<<m<<"\n";
    for(int i=0; i<m; i++){
        if(i%2==0){
            cout<<1<<" "<<n-i/2<<" ";
            for(int j=1; j<=n; j++) cout<<j<<" ";
        } 
        else{
            cout<<2<<" "<<n-i/2<<" ";
            for(int j=1; j<=n; j++) cout<<j<<" ";
        }
 
        cout<<"\n";
    }
}
 
int main(){
    int t; cin>>t; while(t--) solve();
}