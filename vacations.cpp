#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,res1=0; cin>>n; vector<int>v(n);
    for (auto& i:v) cin>>i;
    for (int i=0; i<n-1; i++){
        if (v[i]==1 && v[i+1]==3) v[i+1]=2;
        else if (v[i]==2 && v[i+1]==3) v[i+1]=1;
        if (v[i]==0) res1++;
        if (v[i]==1 && v[i+1]==1) v[i+1]=0;
        if (v[i]==2 && v[i+1]==2) v[i+1]=0;
    }
    if (v[n-1]==0) res1++;
    cout<<res1<<endl;
}