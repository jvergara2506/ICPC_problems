#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>> val(8,vector<char>(8));
    for (int i=0;i<8;i++){
        for (int j=0; j<8;j++){ 
            cin>>val[i][j];
        }
    }
    for (int i=0;i<8;i++){
        for (int j=0; j<8;j++){ 
            if (val[i][j]!='.') cout<<val[i][j];
        }
    } 
    cout<<endl; 
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}