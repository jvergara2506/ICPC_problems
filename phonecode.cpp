#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res; cin>>n; bool p=true;
    string a[n]; res=0;
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<a[0].length(); i++){
        for (int j=0; j<n-1; j++){
            if (a[j][i]==a[j+1][i]){
                continue;    
            }
            else{
                p=false; break;
            }
        }
        if (p==true) res++;
        else break;
    }
    cout<<res<<endl;
}