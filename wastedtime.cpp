#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k; vector<pair<int,int>>p;
    double res=0;
    for (int i=0; i<n; i++){
        int u,v; cin>>u>>v;
        p.push_back({u,v});
    }
    for (int i=0; i<n-1; i++) res+=sqrt(abs(p[i].first-p[i+1].first)*abs(p[i].first-p[i+1].first)+abs(p[i].second-p[i+1].second)*abs(p[i].second-p[i+1].second))*k;
    cout<<fixed<<setprecision(10)<<res/50<<endl;
}