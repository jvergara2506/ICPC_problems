#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, C;
    cin>>R>>C;
    vector<vector<char>> room(R+2, vector<char>(C+2));
    vector<vector<int>> etiqueta(R+2, vector<int>(C+2, -1));
    int e=0;
    vector<pair<int, int>> index(R*C);
    for(int i=1;i<=R; i++) for(int j=1; j<=C; j++) {
        etiqueta[i][j]=e; 
        index[e]={i, j};
        e++;
    }

    int nodo=-1;
    for(int i=1; i<=R; i++){
        for(int j=1; j<=C; j++){
            cin>>room[i][j];
            if(room[i][j]=='#' || room[i][j]=='X') etiqueta[i][j]=-1;
            if(room[i][j]=='E') {
                nodo=etiqueta[i][j];
            }
        }
    }

    vector<vector<int>> adj(R*C);

    for(int i=1; i<=R; i++) for(int j=1; j<=C; j++){
        if(etiqueta[i][j]!=-1){
            if(etiqueta[i+1][j]!=-1) adj[etiqueta[i][j]].push_back(etiqueta[i+1][j]);
            if(etiqueta[i-1][j]!=-1) adj[etiqueta[i][j]].push_back(etiqueta[i-1][j]);
            if(etiqueta[i][j+1]!=-1) adj[etiqueta[i][j]].push_back(etiqueta[i][j+1]);
            if(etiqueta[i][j-1]!=-1) adj[etiqueta[i][j]].push_back(etiqueta[i][j-1]);
        }
    }

    vector<bool> visited(R*C, false);
    vector<int> dis(R*C, 1000000);
    queue<int> q;
    q.push(nodo);
    visited[nodo]=true;
    dis[nodo]=0;
    while(!q.empty()){
        int s=q.front(); q.pop();
        for(auto u:adj[s]){
            if(visited[u]) continue;
            visited[u]=true;
            dis[u]=dis[s]+1;
            q.push(u);
        }
    }

    int Q; cin>>Q;
    while(Q--){
        int i, j;
        cin>>i>>j;
        if(room[i][j]=='#'){
            cout<<"W\n";
            continue;
        }

        if(room[i][j]=='X'){
            cout<<"X\n";
            continue;
        }

        if(room[i][j]=='E'){
            cout<<"E\n";
            continue;
        }

        int n=etiqueta[i][j];
        if(dis[n]==1000000){
            cout<<"?\n";
            continue;
        }

       if(dis[etiqueta[i][j-1]]==dis[etiqueta[i][j]]-1) cout<<"L\n";
       else if(dis[etiqueta[i+1][j]]==dis[etiqueta[i][j]]-1) cout<<"D\n";
       else if(dis[etiqueta[i][j+1]]==dis[etiqueta[i][j]]-1) cout<<"R\n";
       else if(dis[etiqueta[i-1][j]]==dis[etiqueta[i][j]]-1) cout<<"U\n";
    }
}