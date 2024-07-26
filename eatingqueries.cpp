#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,q, sum=0, w=0; cin>>n>>q;
    vector<long long>val(n);
    vector<long long>val2(q);
    for (int i=0; i<n; i++){
        cin>>val[i]; sum+=val[i];
    }
    for (int i=0; i<q; i++){
        cin>>val2[i];
    }
    sort(val.begin(), val.end(), greater<int>());
    vector<long long>s(n);
    for (int i=0; i<n; i++){
        w+=val[i]; s[i]=w;
    }
    for (int i=0; i<q; i++){
        if (val2[i]>sum){
            cout<<-1<<endl;
        }
        else if (val2[i]==sum){
            cout<<n<<endl; 
        }
        else{
            int r=n-1, l=0, ans=0;
            while (l<=r){
                int mit=l+(r-l)/2;
                if (s[mit]>=val2[i]){
                    ans=mit;
                    r=mit-1;
                }
                else{
                    l=mit+1;
                }
            }
            cout<<ans+1<<endl;
        }

    }


}

int main(){
    int t; cin>>t;
    while (t--) solve();
}