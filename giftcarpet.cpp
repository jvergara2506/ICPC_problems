#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int m; cin>>m;
    int c=0;
    vector<vector<char>> val(n, vector<char>(m));
    for (int i=0; i<n;i++){
        for(int j=0; j<m; j++) cin>>val[i][j];
    }
    for (int q=0; q<m; q++){
        for (int i=0; i<n; i++){
            if (val[i][q]=='v'){
                for (q+=1; q<m; q++){
                    for (int j=0;j<n;j++){
                        if (val[j][q]=='i'){
                            for (q+=1; q<m; q++){
                                for (int k=0;k<n;k++){
                                    if (val[k][q]=='k'){
                                        for (q+=1; q<=m; q++){
                                            for (int l=0;l<n;l++){
                                                if (val[l][q]=='a'){
                                                    std::cout<<"YES"<<endl; return;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } 
                } 
            }    
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while (t--) solve();
}