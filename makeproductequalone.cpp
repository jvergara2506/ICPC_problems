#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, p=0, m=LLONG_MAX, res=0; cin>>n;
    vector<long long>val;
    for (int i=0; i<n; i++){
        long long v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        if (val[i]<0) p++;
    }
    if (p%2==0){
        for (int i=0; i<n; i++){
            res+=abs(abs(val[i])-1);
        }
    }
    else{
        for (int i=0; i<n; i++){
            m=min((abs(val[i])), m);
        }
        for (int i=0; i<n; i++){
            res+=abs(abs(val[i])-1);
        }
        if (m!=0) res+=2;
    }
    cout<<res<<endl;
}