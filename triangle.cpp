#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d, maxi1, maxi2, maxi3, maxi4; cin>>a>>b>>c>>d;
    maxi1=max(max(a,b), max(c,d)); maxi4=min(min(a,b), min(c,d));
    maxi2=max(min(max(a,b), max(c,d)), max(min(a,b), min(c,d))); maxi3=min(min(max(a,b), max(c,d)), max(min(a,b), min(c,d)));
    if (maxi4+maxi3>maxi2 || maxi3+maxi2>maxi1) cout<<"TRIANGLE"<<endl;
    else if (maxi4+maxi3==maxi2 || maxi3+maxi2==maxi1) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
}