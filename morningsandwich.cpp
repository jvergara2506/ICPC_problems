#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a; cin>>b; cin>>c;
    if (a<=1 || b+c==0){ 
    cout<<0<<endl; return;
    }
    if (a>b && a>c){
        if (a-b-c<=0) cout<<2*a-1<<endl;  
        else cout<<2*(b+c)+1<<endl; 
    }
    if (a<=b || a<=c) cout<<2*a-1<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}