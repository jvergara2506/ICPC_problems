#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; vector<int>dp(3);
    for (int i=0; i<n; i++){
        vector<int>ndp(3),c(3);
        for (int j=0; j<3; j++) cin>>c[j];
        for (int k=0; k<3; k++){
            for (int l=0; l<3; l++){
                if (l!=k) ndp[l]=max(ndp[l],dp[k]+c[l]);
            }
        }
        dp=ndp;
    }
    cout<<max({dp[0],dp[1],dp[2]})<<endl;
}