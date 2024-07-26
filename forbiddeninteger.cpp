#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n; cin>>k; cin>>x;
    if (n==k && k!=x){
        cout<<"YES"<<endl;
        cout<<1<<endl<<k<<endl;
        return;
    }
    if (k==1 && x==1){
        cout<<"NO"<<endl; return;
    }
    if (k>1 && x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for (int i=0; i<n; i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    if (k>1 && x==1 && n%2==0){
        cout<<"YES"<<endl<<n/2<<endl;
        for (int i=0; i<(n/2); i++) cout<<2<<" ";
        cout<<endl;
        return;
    }
    if (k>1 && x==1 && n%2==1 && k>2){
        cout<<"YES"<<endl<<((n-3)/2)+1<<endl;
        cout<<3<<" ";
        for (int i=0; i<((n-3)/2); i++) cout<<2<<" ";
        cout<<endl;
        return;
    }
    if (k==2 && x==1){
        if (n%2==0){
            cout<<"YES"<<endl<<n/2<<endl;
            for (int i=0; i<(n/2); i++) cout<<2<<" ";
            cout<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}