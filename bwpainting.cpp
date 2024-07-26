#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    while (1){
        int n,m,c;
        cin>>n>>m>>c;
        if (n==0) break;
        n-=7; m-=7;
        if (c==1){
            cout<<((n*m+1)/2)<<endl;
        }
        else cout<<n*m/2<<endl;
    }
}