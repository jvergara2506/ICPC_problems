#include <bits/stdc++.h>
using namespace std;

struct matrix{
    double a[2][2]={{0,0},{0,0}};
    matrix operator *(const matrix& other){
        matrix product;
        for (int i=0; i<2; i++){
            for (int j=0; j<2; j++){
                for (int k=0; k<2; k++) product.a[i][k]+=a[i][j]*other.a[j][k];
            }
        }
        return product;
    }
};

matrix expopower(matrix a, int k){
    matrix product;
    for (int i=0; i<2; i++) product.a[i][i]=1;
    while (k>0){
        if (k%2) product=product*a;
        a=a*a; k/=2;
    }
    return product;
}

int main(){
    int n; double p; cin>>n>>p;
    matrix single;
    single.a[0][0]=1-p;
    single.a[0][1]=p;
    single.a[1][0]=p;
    single.a[1][1]=1-p;
    matrix total=expopower(single,n);
    cout<<setprecision(10)<<fixed<<total.a[0][0]<<endl;
}