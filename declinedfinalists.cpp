#include <bits/stdc++.h>
using namespace std;

int main(){
    int k; cin>>k; 
    vector<int> val;
    for (int i=0; i<k; i++){
        int v; cin>>v; val.push_back(v);
    }
    auto maxi=max_element(val.begin(), val.end());
    if (*maxi>=25){
        cout<<*maxi-25<<endl;
    }
    else cout<<0<<endl;   
}