#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,d=0; cin>>n>>k;
    vector<int>val;
    for (int i=0; i<2*n+1; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=1; i<2*n; i+=2){
        if ((val[i]-val[i-1])>1 && (val[i]-val[i+1])>1){
            val[i]-=1;
            d++;
        }
        if (d==k) break;
    }
    for (int i=0; i<2*n+1; i++){
        cout<<val[i]<<" ";
    }
}