#include <bits/stdc++.h>

using namespace std;

bool isin(string a, string b){
    int as = a.size(), bs = b.size();
    int ret = false;
    for(int i=0; i<as; i++){
        if(as-i<bs) break;
        if(a.substr(i, bs)==b){
            ret = true;
            break;
        }
    }

    return ret;
}

int main(){
    int n; cin>>n;
    vector<string> words(n);
    for(auto &x:words) cin>>x;
    set<string> dif;
    for(auto x:words){
        if(dif.empty()) {dif.insert(x+x); continue;}
        bool salir = false;
        for(auto y:dif){
            if(y.size()!=x.size()*2) continue;
            if(isin(y, x)){
                salir = true;
                break;
            }
        }
        if(salir) continue;
        dif.insert(x+x);
    }

    cout<<dif.size()<<"\n";
}