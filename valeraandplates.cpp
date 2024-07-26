#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k,u=0,d=0; cin>>n>>m>>k;
    vector<int> val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        if (val[i]==1) u++;
        if (val[i]==2) d++;
    }
    int uu=u-m; int dd=d-k; int ud=0;
    if (m>=u && k+abs(uu)>=d){
        cout<<0<<endl;
    }
    else{
        if (uu<0){
            ud=uu; uu=0; 
        }
        if (dd<0){ 
            dd=0; ud=0;
        }
        cout<<uu+dd+ud<<endl;
    }
}