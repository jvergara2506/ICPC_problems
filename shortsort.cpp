#include <iostream>
using namespace std;

void solve(){
     char n[4]; cin>>n;
        if (n[0]=='a' && n[1]=='b' && n[2]=='c' && n[3]=='\0'){
            cout<<"YES"<<endl;
        }
        else if (n[0]=='a' && n[1]=='c' && n[2]=='b' && n[3]=='\0'){
            cout<<"YES"<<endl;
        }
        else if (n[0]=='b' && n[1]=='a' && n[2]=='c' && n[3]=='\0'){
            cout<<"YES"<<endl;
        }
        else if (n[0]=='b' && n[1]=='c' && n[2]=='a' && n[3]=='\0'){
            cout<<"NO"<<endl;
        }
        else if (n[0]=='c' && n[1]=='b' && n[2]=='a' && n[3]=='\0'){
            cout<<"YES"<<endl;
        }
        else if (n[0]=='c' && n[1]=='a' && n[2]=='b' && n[3]=='\0'){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO VÁLIDO"<<endl;
        }
    }

int main(){
   int t; cin>>t;
   while (t--){
    solve();
   }

    return 0;
}
