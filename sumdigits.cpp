#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t, sum=0; cin>>t; ll F[200005];
    for (ll i=1; i<=2e5; i++){
        ll ss=i;
        while (ss>0){
            sum+=ss%10;
            ss/=10; 
        }
        F[i]=sum;
    }
    while (t--){
        ll n; cin>>n;
        cout<<F[n]<<endl;
    }
}