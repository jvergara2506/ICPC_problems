#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<vector<char>>v(3,vector<char>(3));
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>v[i][j];
        }
    }
    vector<tuple<char, char, char>>p;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                for (int l=0; l<3; l++){
                    if((i==k && (j==l+1 || j==l-1)) || (i==k+1 && (j==l+1 || j==l || j==l-1)) || (i==k-1 && (j==l+1 || j==l || j==l-1))){
                        for (int m=0; m<3; m++){
                            for (int n=0; n<3; n++){
                                if((k==m && (l==n+1 || l==n-1)) || (k==m+1 && (l==n+1 || l==n || l==n-1)) || (k==m-1 && (l==n+1 || l==n || l==n-1))){
                                    if (i!=m || j!=n) p.push_back({v[i][j], v[k][l], v[m][n]});
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(p.begin(), p.end());
    cout<<get<0>(p[0])<<get<1>(p[0])<<get<2>(p[0])<<endl;
}