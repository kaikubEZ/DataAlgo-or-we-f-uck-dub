#include <bits/stdc++.h>
using namespace std;



void DFS(int u,vector<vector<int>> &G,vector<bool>&visited){
     visited[u]= true;
     for(int v:G[u]){
          if(!visited[v]){
               DFS(v,G,visited);
          }
     }
}

int main(){
     cin.tie(nullptr)->sync_with_stdio(0);

     int v,e;cin>>v>>e;
     vector<vector<int>> G(v+1);
     while(e--){
          int u,v;cin>>u>>v;
          
          G[u].push_back(v);
          G[v].push_back(u);
     }

     vector<bool> visited(v+1,false);
     int connect = 0;

     for(int i = 1;i<=v;++i){
          if(!visited[i]) {
               connect++;
               DFS(i,G,visited);
          }
     }

     cout<<connect;
}