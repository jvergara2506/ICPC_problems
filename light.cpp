#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while (1){
        ll n; cin>>n; if (!n) break;
        ll raiz=sqrt(n);
        cout<<(n==raiz*raiz ? "yes" : "no" )<<endl;
    }
}