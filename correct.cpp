#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin>>n>>m;
    map<int, map<int, int>> ver;
    int a, b, x;
    while(n--){
        cin>>a>>b;
        for(int i=0; i<b; i++){
            cin>>x;
            ver[a][x]++;
        }
    }

    while(m--){
        cin>>a>>b;
        for(int i=0; i<b; i++){
            cin>>x;
            ver[a][x]--;
        }
    }


    int ms = 0, nr = 0, mis = 0;

    map<int, vector<int>> MK;

    bool mo;

    for(auto &x:ver){
        int s=x.first;
        mo=false;
        for(auto &y:x.second){
            int i = y.first;
            if(ver[s][i]!=0){
                mo = true;
                int co = ver[s][i]*i;
                MK[s].push_back(co);
                if(co<0) nr++;
                else mis ++;
            }
        }

        ms+=(int)mo;
    }

    if(ms == 0 && nr == 0 && mis ==0){
        cout<<"GREAT WORK! NO MISTAKES FOUND!\n";
        return 0;
    }

    for(auto &x:MK){
        cout<<x.first<<" ";
        for(int y:MK[x.first]){
            if(y>0) cout<<'+'<<y<<" ";
            else cout<<y<<" ";
        }

        cout<<"\n";
    }

    cout<<"MISTAKES IN "<<ms<<" STUDENTS: "<<nr<<" NOT REQUESTED, "<<mis<<" MISSED\n";
}