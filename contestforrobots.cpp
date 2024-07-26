#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, u=0; cin>>n;
    vector<int> val1; vector<int>val2;
    for (int i=0; i<n; i++){
        int v; cin>>v; val1.push_back(v);
    }
    for (int i=0; i<n; i++){
        int w; cin>>w; val2.push_back(w);
    }
    for (int i=0; i<n; i++){
        if (val1[i]==0 && val2[i]==1) c++;
    }
    for (int i=0; i<n; i++){
        if (val1[i]==1 && val2[i]==0) u++;
    }
    if (u==0){
        cout<<-1<<endl;
    }
    else cout<<ceil((c+1+0.0)/u)<<endl;
}