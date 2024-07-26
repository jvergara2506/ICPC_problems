#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,z;
    vector<int> val1;
    vector<int> val2;
    cin>>a; cin>>b;
    z=a;
    if (a==b){
        cout<<a<<endl; return;
    }
    if ((b-z)>=100){
        for (int i=0; i<b-z+1; i++){
            if (a%100==90){
                cout<<a<<endl; return;
            }
            a+=1;
        }
    }
    if ((b-z)<100){
        for (int i=0; i<(b-z)+1; i++){
            val1.push_back(a);
            val2.push_back(abs(((a%100-a%10)/10)-a%10));
            a+=1;
        }
        auto max=max_element(val1.begin(), val1.end());
        int pos=distance(val1.begin(), max);
        cout<<val1[pos]<<endl; return;
    }       
}
int main(){
    int t; cin>>t;
    while (t--) solve();
}