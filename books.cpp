#include <bits/stdc++.h>
using namespace std;

int lib(int i, vector<int>& time, int t){
    int l=i; int r=time.size()-1;
    while (l<=r){
        int m=l+(r-l)/2;
        if (time[m]-time[i-1]<=t) l=m+1;
        else r=m-1;
    }
    return r-i+1;
}

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> time;
    time.push_back(0);
    for (int i=0; i<n; i++){
        int v; cin>>v; time.push_back(v);
    } 
    for (int i=0; i<n; i++){
        time[i+1]+=time[i];
    }
    int maxi=0;
    for (int i=1; i<=n; i++){
        maxi=max(maxi,lib(i,time,t));
    }
    
    cout<<maxi<<"\n";
}
