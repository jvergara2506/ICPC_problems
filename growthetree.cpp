#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; long long a=0, b=0;
    vector<int> val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    sort(val.begin(), val.end());
    for (int i=floor((val.size()+0.0)/2); i<n; i++){
        a+=val[i];
    }
    for (int i=0; i<floor((val.size()+0.0)/2); i++){
        b+=val[i];
    }
    cout<<a*a+b*b<<endl;
}