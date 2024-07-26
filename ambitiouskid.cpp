#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> val(n);
    for(int i=0; i<n; i++){
        cin>>val[i];
        val[i]=abs(val[i]);
    }

    sort(val.begin(), val.end());
    cout<<val[0]<<"\n";
    /*
    otra forma:
    int mini = 100000000;
    for(int i:val) mini=min(i, mini);
    cout<<mini<<"\n"; */
}