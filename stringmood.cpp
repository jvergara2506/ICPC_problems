#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;

struct matrix{
    ll a[2][2]={{0,0},{0,0}};
    matrix operator*(const matrix& other){
        matrix product;
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                for (int k=0; k<2; k++) product.a[i][k]=(product.a[i][k]+a[i][j]*other.a[j][k]) % mod;
            }
        }
        return product;
    }
};
matrix expopower(matrix a, ll k){
    matrix product;
    for (int i=0; i<2; i++) product.a[i][i]=1;
    while (k>0){
        if (k%2) product=product*a;
        a=a*a; k/=2;
    }
    return product;
}

int main(){
    ll n; cin>>n;
    matrix single;
    single.a[0][0]=19;
    single.a[0][1]=7;
    single.a[1][0]=6;
    single.a[1][1]=20;
    matrix total=expopower(single,n);
    cout<<(total.a[0][0])%mod<<endl;
}