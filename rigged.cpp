#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<vector<int>> m(n,vector<int>(2));
    for (int i=0;i<n;i++){
        cin>>m[i][0];
        cin>>m[i][1];
    }
    bool k=false;
    for (int i=1;i<n;i++){
        if (m[0][0]<=m[i][0] && m[0][1]<=m[i][1]){
            cout<<-1<<endl;
            k=true;
            break;
        }
    } 
    if (k==false){
        cout<<m[0][0]<<endl;
        } 
}

int main(){
    int t; cin>>t;
    while (t--){
    solve();    
    }
}