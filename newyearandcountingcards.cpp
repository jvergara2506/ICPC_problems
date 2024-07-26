#include <bits/stdc++.h>
using namespace std;

int main(){
    string val; cin>>val;
    int res=0;
    for (int i=0; i<val.size(); i++){
        if (val[i]=='a' || val[i]=='e' || val[i]=='i' || val[i]=='o' || val[i]=='u' || val[i]=='1' || val[i]=='3' || val[i]=='5' || val[i]=='7' || val[i]=='9') res++;
    }
    cout<<res<<endl;
}