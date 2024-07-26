#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin>>n>>q; vector<string>f(n); vector<vector<int>>p(n+2,vector<int>(n+2));
    for (auto& i:f) cin>>i;
    if (f[0][0]=='*') p[1][1]=1;
    for (int i=1; i<n+1; i++){
        for (int j=1; j<n+1; j++){
            if (f[i-1][j-1]=='*') p[i][j]=p[i][j-1]+1;
            else p[i][j]=p[i][j-1];
        }
    }
    for (int j=1; j<n+1; j++){
        for (int i=1; i<n+1; i++){
            p[i][j]+=p[i-1][j];
        }
    }
    while (q--){
        int y1,x1,y2,x2; cin>>y1>>x1>>y2>>x2;
        cout<<p[y2][x2]-p[y2][x1-1]-p[y1-1][x2]+p[y1-1][x1-1]<<endl;
    }
}