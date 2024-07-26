#include <bits/stdc++.h>
using namespace std;

bool cp(const pair<int, int>& a, const pair<int, int>& b){
    if (a.first!=b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}

int main(){
    int n,k; cin>>n>>k;
    vector<pair<int, int>>val;
    for (int i=0; i<n; i++){
        int v,w; cin>>v>>w; pair<int, int>p=make_pair(v,w); val.push_back(p);
    }
    sort(val.begin(), val.end(), cp);
    int d=0;
    for (int i=0; i<n; i++){
        if (val[i].first==val[k-1].first && val[i].second==val[k-1].second){
            d++;
        }
    }
    cout<<d<<endl;
}