#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>> val(3, vector<char>(3));
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) cin>>val[i][j];
    }
    if (val[0][0]==val[0][1] && val[0][0]==val[0][2] && val[0][0]!='.') cout<<val[0][0]<<endl;
    else if (val[1][0]==val[1][1] && val[1][0]==val[1][2] && val[1][0]!='.') cout<<val[1][0]<<endl;
    else if (val[2][0]==val[2][1] && val[2][0]==val[2][2] && val[2][0]!='.') cout<<val[2][0]<<endl;  
    else if (val[0][0]==val[1][0] && val[0][0]==val[2][0] && val[0][0]!='.') cout<<val[0][0]<<endl; 
    else if (val[0][1]==val[1][1] && val[0][1]==val[2][1] && val[0][1]!='.') cout<<val[0][1]<<endl;
    else if (val[0][2]==val[1][2] && val[0][2]==val[2][2] && val[0][2]!='.') cout<<val[0][2]<<endl;
    else if (val[0][0]==val[1][1] && val[0][0]==val[2][2] && val[0][0]!='.') cout<<val[0][0]<<endl;
    else if (val[0][2]==val[1][1] && val[0][2]==val[2][0] && val[0][2]!='.') cout<<val[0][2]<<endl; 
    else cout<<"DRAW"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}