#include <bits/stdc++.h>

using namespace std;

int modu(int a, int b){
    return (b+a%b)%b;
}

int main(){
    int n, b;
    cin>>n>>b;
    vector<int> performance(n);
    vector<int> B(n, -1);
    for(int &x:performance) cin>>x;
    vector<vector<int>> adj(n);
    queue<int> q;
    for(int i=0; i<n; i++){
        if(performance[i]==0) q.push(i);
    }
    for(int i=0; i<n; i++){
        if(performance[i]<performance[modu(i+1, n)]) adj[i].push_back(modu(i+1, n));
        if(performance[i]<performance[modu(i-1, n)]) adj[i].push_back(modu(i-1, n));
        if(performance[i]<performance[modu(i-1, n)] && performance[i]<performance[modu(i+1, n)]){
            q.push(i);
            if(performance[i]>0) B[i]=b;
        }
    }

    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int x:adj[s]){
            if(B[x]!=-1) continue;
            B[x] = B[s]+b;
            q.push(x);
        }
    }

    for(int x:B) cout<<x<<" "; cout<<"\n";
}