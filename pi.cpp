#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin>>n, n){
        vector<int>v(n); double sum=0;
        for (auto& x:v) cin>>x;
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if (gcd(v[i],v[j])==1) sum++;
            }
        }
        if (!sum) cout<<"No estimate for this data set."<<endl;
        else{
            double pi=sqrt(3*(n*(n-1))/sum);
            cout<<fixed<<setprecision(6)<<pi<<endl;
        }
    }
}