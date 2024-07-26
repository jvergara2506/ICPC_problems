#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<vector<pair<double,double>>>rec(12); int i=1;
    while (1){
        char r; cin>>r; if (r=='*') break;
        double x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        rec[i].push_back({x1,y1}); rec[i].push_back({x2,y2});
        i++;
    }
    vector<pair<double,double>>p;
    while (1){
        double a,b; cin>>a>>b;
        if (a==9999.9) break;
        p.push_back({a,b});
    }
    int c=1;
    for (auto& x:p){
        bool fg=false;
        for (int j=1; j<i; j++){
            if (x.first>min(rec[j][0].first, rec[j][1].first) && x.first<max(rec[j][0].first, rec[j][1].first) && x.second>min(rec[j][0].second, rec[j][1].second) && x.second<max(rec[j][0].second, rec[j][1].second)){
                cout<<"Point "<<c<<" is contained in figure "<<j<<endl; fg=true;
            }
        }
        if (!fg) cout<<"Point "<<c<<" is not contained in any figure"<<endl;
        c++;
    }
}

