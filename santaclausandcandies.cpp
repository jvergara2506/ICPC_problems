#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, b=0; cin>>n;
    vector<int> val;
    for (int i=0; i<=n; i+=a){
        a++; b+=a; val.push_back(a); 
    }
    cout<<a-1<<endl;
    int d=b-n;
    for (int i=0; i<val.size(); i++){
        if (val[i]!=d){
            cout<<val[i]<<" ";
        }
    }
}