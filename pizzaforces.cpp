#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,res; cin>>n;
    res=0;
    if (n>0 && n<7){
        cout<<15<<endl; return;
    }
    if (n>6 && n<9){
        cout<<20<<endl; return;
    } 
    if (n==9){
        cout<<25<<endl; return;
    }
    if (n%10==0  || n%10==9){
        res=25*(ceil((n+0.0)/10));
        cout<<res<<endl; return;
    }
    if (n%10>=5 && n>10){
        res+=25*floor(n/10);
        if (n%10==5 || n%10==6) cout<<res+15<<endl;
        if (n%10==7 || n%10==8) cout<<res+20<<endl;
        return;
    }
    if (n%10>0 && n%10<=4 && n>10){
        res+=25*(floor(n/10)-1);
        if (n%10==1 || n%10==2) cout<<res+30<<endl;
        if (n%10==3 || n%10==4) cout<<res+35<<endl;
        return; 
    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}