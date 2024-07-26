#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; unsigned long long c, r; cin>>n; c=0; r=0;
    vector<vector<char>> val(n, vector<char>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cin>>val[i][j];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (val[i][j]=='C') c+=1;
            if (j==n-1){
                r+=(c*(c-1))/2; c=0;
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (val[j][i]=='C') c+=1;
            if (j==n-1){
                r+=(c*(c-1))/2; c=0;
            }
        }
    }
    cout<<r<<endl;
}