#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; double pi=3.14159, res=0;
    vector<int>val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v); 
    }
    sort(val.begin(), val.end(), greater<int>());
    for (int i=0; i<n; i+=2){
        res+=pi*val[i]*val[i];
    }
    for (int i=1; i<n; i+=2){
        res-=pi*val[i]*val[i];
    }
    cout<<res<<endl;
}