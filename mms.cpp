#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int a, ans=0, res=0; cin>>a; ans=a;
        for (int i=2; i<=a; i++){
            int sum=0;
            for (int j=1; j<=100; j++){
                if (i*j<=a) sum+=i*j;
                else break;
            }
            if (sum==max(ans,sum)) res=i;
            ans=max(ans,sum);
        }
        cout<<res<<endl;
    }
}