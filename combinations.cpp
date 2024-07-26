#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,m,cb[101][101];
    cb[1][1]=1; cb[1][0]=1;
    for (ll i=2; i<=100; i++){
        cb[i][0]=1;
        for (ll j=1; j<=100; j++) cb[i][j]=cb[i-1][j]+cb[i-1][j-1];
    }
    while (cin>>n>>m, n||m){
        cout<<n<<" things taken "<<m<<" at a time is "<<cb[n][m]<<" exactly."<<endl;
    }
}



