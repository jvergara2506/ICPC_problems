#include <bits/stdc++.h>
using  namespace std;

int main(){
    int n,a,b; cin>>n; a=1; b=n;
    vector<int> val;
    for (int i=2; i<n; i++){
        if (n%i==0){
            val.push_back(i);
        }
    }
    if (val.size()>0){
        b=val[floor((val.size()+0.0)/2)];
        a=n/b;
    }
    cout<<a<<" "<<b<<endl;
}