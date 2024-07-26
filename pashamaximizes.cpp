#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; int k,t; cin>>a>>k; int tam=a.size();
    for (int i=0; i<a.size()-1; i++){
        t=i;
        for (int j=i+1; j<=min(tam-1,i+k); j++) if (a[t]<a[j]) t=j;
        k-=t-i;
        while (t>i) swap(a[t],a[t-1]),t--;
    }
    cout<<a<<endl;
}