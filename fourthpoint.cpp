#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1,y1,x11,y11,x2,y2,x22,y22; 
    while (cin>>x1>>y1>>x11>>y11>>x2>>y2>>x22>>y22){
        if (x11==x2 && y11==y2) cout<<fixed<<setprecision(3)<<x1-(x2-x22)<<" "<<y1-(y2-y22);
        else if (x1==x2 && y1==y2) cout<<fixed<<setprecision(3)<<x11-(x2-x22)<<" "<<y11-(y2-y22);
        else if (x1==x22 && y1==y22) cout<<fixed<<setprecision(3)<<x11-(x22-x2)<<" "<<y11-(y22-y2);
        else if (x11==x22 && y11==y22) cout<<fixed<<setprecision(3)<<x1-(x22-x2)<<" "<<y1-(y22-y2);
        cout<<endl;
    }
}