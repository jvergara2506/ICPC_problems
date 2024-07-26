#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    int n = s.size();
    vector<int> minizq(n), minder(n), prefix(n);
    if(s[0]=='B') prefix[0]=1; else prefix[0]=-1;
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1];
        if(s[i]=='B') prefix[i]++;
        else prefix[i]--;
    }

    minizq[0]=prefix[0];
    for(int i=1; i<n; i++) minizq[i]=min(minizq[i-1], prefix[i]);
    minder[0]=prefix[n-1];
    for(int i=n-2; i>=0; i--) minder[i]=min(minder[i+1], prefix[i]);

    if(minizq[n-1]>=0){
        cout<<0<<"\n";
        return;
    }

    for(int i=0; i<n-1; i++){
        if(minizq[i]>=prefix[i] && minder[i+1]>=prefix[i]){
            cout<<i+1<<"\n";
            return;
        }
    }


    cout<<"-1\n";
}

int main(){
    int t; cin>>t; while(t--) solve();
}