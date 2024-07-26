#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> T, P, b;
int m, n;
int ans = 0;
void kmpPreprocess(){
    int i=0, j=-1; b[0] = -1;
    while(i<m){
        while((j>=0) && (P[i] != P[j])) j = b[j];
        ++i; ++j;
        b[i] = j;
    }
}
 
void kmpSearch(){
    int i=0, j=0;
    while(i<n){
        while((j>=0) && (T[i] != P[j])) j = b[j];
        ++i; ++j;
        if(j==m){
            ans++;
            j=b[j];
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>m>>n;
    vector<int> M(m), N(n);
    P.assign(m-1, 0);
    T.assign(n-1, 0);
    b.assign(m-1, 0);

    cin>>M[0];
    for(int i=0; i<m-1; i++) {    
        cin>>M[i+1];
        P[i] = M[i+1] - M[i];
    }
    
    cin>>N[0];
    for(int i=0; i<n-1; i++) {
        cin>>N[i+1];
        T[i-1] = N[i] - N[i-1];
    }
 
    if(m==1){
        cout<<n<<"\n";
        return 0;
    }
    
    n--, m--;
    kmpPreprocess();
    kmpSearch();
    cout<<ans<<"\n";
}