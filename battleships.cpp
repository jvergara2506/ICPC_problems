#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,test=1; cin>>t; 
    while (t--){
        int n,res=0; cin>>n; vector<string>g(n); queue<pair<int,int>>q;
        for (int i=0; i<n; i++) cin>>g[i]; 
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (g[i][j]=='x'){
                    res++; 
                    q.push({i,j}); g[i][j]='.';
                    while (!q.empty()){
                        auto s=q.front(); q.pop();
                        if (s.first+1<n && (g[s.first+1][s.second]=='@' || g[s.first+1][s.second]=='x')){
                            g[s.first+1][s.second]='.'; q.push({s.first+1,s.second});
                        } 
                        if (s.first-1>=0 && (g[s.first-1][s.second]=='@' || g[s.first-1][s.second]=='x')){
                            g[s.first-1][s.second]='.'; q.push({s.first-1,s.second});
                        }
                        if (s.second+1<n && (g[s.first][s.second+1]=='@' || g[s.first][s.second+1]=='x')){
                            g[s.first][s.second+1]='.'; q.push({s.first,s.second+1});
                        } 
                        if (s.second-1>=0 && (g[s.first][s.second-1]=='@' || g[s.first][s.second-1]=='x')){
                            g[s.first][s.second-1]='.'; q.push({s.first,s.second-1});
                        }
                    }
                }
            }
        }
        cout<<"Case "<<test<<": "<<res<<endl;
        test++;
    }
}