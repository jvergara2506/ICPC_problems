#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

class SegmentTree{
    private:
        int n;
        vi A, st, lazy;
        int l(int p) { return p<<1;}
        int r(int p) { return (p<<1)+1;}

        int conquer(int a, int b){
            if(a==-1) return b;
            if(b==-1) return a;
        }

        void build(int p, int L, int R){
            if(L==R)
                st[p]=A[L];
            else{
                int m = (L+R)/2;
                build(l(p), L, m);
                build(r(p), m+1, R);
            }
        }

        void propagate(int p, int L, int R){
            if(lazy[p] != -1){
                st[p]
            }
        }
}

int main(){

}