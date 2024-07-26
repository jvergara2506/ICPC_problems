#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b; cin>>a>>b;
    int A=a, B=b;
    int l = 0, r = 0;
    while(A!=0){
        l++;
        A/=2;
    }

    while(B!=0){
        r++;
        B/=2;
    }

    int ans = 0;

    for(int i=l+1; i<r; i++){
        ans+=1<<((i/2 + i%2)-1);
    }

    uint32_t ap = a, bp = b;
    bitset<32> ba(ap),  bb(bp);
    for(int i=0; i<l; i++){
        if(i>l-i-1) break;
        ba[i] = ba[l-i-1] = max(ba[i], ba[l-i-1]);
    }

    bb[r-1]=1;

    for(int i=1; i<r-1; i++){
        if(i>r-i-1) break;
        bb[i] = bb[r-i-1] = max(bb[i], bb[r-i-1]);
    }
    
    if(l==r){
       int cha=0, chb=0;
       for(int i=0; i<l; i++){
        cha+=ba[i]*(1<<i);
        chb+=bb[i]*(1<<i);
       }

       if(cha>chb){
        cout<<"0\n";
        return;
       }

       ans = 1;
       for(int i=0; i<l/2+l%2; i++){
        if(ba[i]<bb[i]) ans*=2;
       }
    }

    else{
        int sum = 1;
       for(int i=0; i<l/2+l%2; i++){
        if(ba[i]==0) sum*=2;
       }

       ans+=sum;

        sum=1;
       for(int i=1; i<r/2+r%2; i++){
        if(ba[i]==1) sum*=2;
       }

       ans+=sum;
    }

    cout<<ans<<"\n";
}

int main(){
    int t; cin>>t; while(t--) solve();
}