#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>val;
    vector<int>res(n,1);
    for (int i=0; i<n; i++){ 
        int v; cin>>v; val.push_back(v);
    }
    int h=0;
    for (int i=0; i<n-1; i++){
        if (val[i]==val[i+1]) h++;
    }
    if (h==(n-1)){
        cout<<-1<<endl; return;
    }
    int m=0, w=0; bool g=true;
    for (int i=0; i<n-1; i++){
        for (int k=1; k<n-i; k++){
            if (val[i]==val[i+k]){
                res[i]=2; m=i; w=i+k; 
                g=false; break;
            }
        }
        if (g==false) break;
    }
    if (w==0){
        cout<<-1<<endl; return;
    }
    bool s=true;
    for (int i=0; i<n-1; i++){
        for (int k=1; k<n-i; k++){
            if (val[i]==val[i+k] && i!=m && (i+k)!=w && val[i]!=val[m]){
                res[i]=3; s=false; break;
            }
        }
        if (s==false) break;
    }
    if (s==true){
        cout<<-1<<endl; return;
    }
    for (int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}