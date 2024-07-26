#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res=0, k=0, d=0; cin>>n;
    vector<int>val;
    for (int i=0; i<n; i++){
        int v; cin>>v; val.push_back(v);
    }
    for (int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if (val[j]>=val[j+1]) res++;
            else break;
        }
        for (int j=i; j>0; j--){
            if (val[j]>=val[j-1]) res++;
            else break;
        }
        d=max(d, res); res=0;
    }
    cout<<d+1<<endl;

}