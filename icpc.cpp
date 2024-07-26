#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=65, W=55;

ll dp[N][W][W][W];
ll mkp(vector<ll>w, ll n, ll w1, ll w2,ll w3){
    for (ll i=0; i<=n; i++){
        for (ll j=0; j<=w1; j++){
            for (ll k=0; k<=w2; k++){
                for (ll l=0; l<=w3; l++){
                    if (i==0) dp[i][j][k][l]=0;
                    else if (w[i-1]<=j && w[i-1]<=k && w[i-1]<=l){
                        dp[i][j][k][l]=max(max(1+dp[i-1][j-w[i-1]][k][l],1+dp[i-1][j][k-w[i-1]][l]),max(1+dp[i-1][j][k][l-w[i-1]],dp[i-1][j][k][l]));
                    }
                    else if (w[i-1]<=j && w[i-1<=k]){
                        dp[i][j][k][l]=max(max(1+dp[i-1][j-w[i-1]][k][l],1+dp[i-1][j][k-w[i-1]][l]),dp[i-1][j][k][l]);
                    }
                    else if (w[i-1]<=j && w[i-1<=l]){
                        dp[i][j][k][l]=max(max(1+dp[i-1][j-w[i-1]][k][l],1+dp[i-1][j][k][l-w[i-1]]),dp[i-1][j][k][l]);
                    }
                    else if (w[i-1]<=k && w[i-1]<=l){
                        dp[i][j][k][l]=max(max(1+dp[i-1][j][k-w[i-1]][l],1+dp[i-1][j][k][l-w[i-1]]),dp[i-1][j][k][l]);
                    }
                    else if (w[i-1]<=j) dp[i][j][k][l]=max(1+dp[i-1][j-w[i-1]][k][l],dp[i-1][j][k][l]);
                    else if (w[i-1]<=k) dp[i][j][k][l]=max(1+dp[i-1][j][k-w[i-1]][l],dp[i-1][j][k][l]);
                    else if (w[i-1]<=l) dp[i][j][k][l]=max(1+dp[i-1][j][k][l-w[i-1]],dp[i-1][j][k][l]);
                    else dp[i][j][k][l]=dp[i-1][j][k][l];
                }
            }
        }
    }
    return dp[n][w1][w2][w3];
}

int main(){
    ll n,a,b,c, res=-1; cin>>n>>a>>b>>c; vector<ll>v(n);
    for (ll i=0; i<n;i++){
        cin>>v[i];
    }
    ll aa=a,bb=b,cc=c;
    for (ll i=1; i<80000; i++){
        aa=a*i; bb=b*i; cc=c*i;
        if (mkp(v,n,aa,bb,cc)==n){res=i; break;}
    }
    cout<<res<<endl;
}