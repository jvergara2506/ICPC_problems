#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m,n; cin>>m>>n; vector<string>c(m);
    int x,y;
    for (int i=0; i<m; i++){
        string l; cin>>l; 
        c[i]=l;
    }
    for (int i=0; i<c[m-1].size(); i++){
        if (c[m-1][i]=='@'){
            x=i; y=m-1; break;
        }
    }
    char cam[]={'I','E','H','O','V','A','#'};
    for (int i=0; i<=6; i++){
        if (c[y][x+1]==cam[i]){
            cout<<"right"; x++;
        }
        else if (c[y][x-1]==cam[i]){
            cout<<"left"; x--;
        }
        else if (c[y-1][x]==cam[i]){
            cout<<"forth"; y--;
        }
        if (i!=6) cout<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t; while (t--) solve();
}