#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int L,W,H,l,w,h,ori,resp=1;
    int btry[2]={0,0};
    int ctry[2]={0,0};

    cin >> L >> W >> H;
    cin >> l >> w >> h;

    int sumbox=L+W+H;
    int sumchoc=l+w+h;

    if(sumchoc > sumbox){
        
        resp=0;

    } else{

        int bmax=max(max(L,W),H);
        int cmax=max(max(l,w),h);
        ori=bmax/cmax;

        //Para la caja
        if(L!=bmax){
            btry[0]=L;
        }

        if(W!=bmax && btry[0]==0){
            btry[0]=W;
        }else if (W!=bmax){
            btry[1]=W;
        }

        if(btry[1]==0){
            btry[1]=H;
        }

        //Para los chocolates
        if(l!=cmax){
            ctry[0]=l;
        }

        if(w!=cmax && ctry[0]==0){
            ctry[0]=w;
        }else if (w!=cmax){
            ctry[1]=w;
        }

        if(ctry[1]==0){
            ctry[1]=h;
        }

        //Multiplicaciones para buscar la orientacion
        int a1=(btry[0]/ctry[0]) * (btry[1]/ctry[1]);
        int a2=(btry[0]/ctry[1]) * (btry[1]/ctry[0]);

        if(a1>a2){
            resp=a1;
        }else{
            resp=a2;
        }
    }

    cout << ori*resp;

}