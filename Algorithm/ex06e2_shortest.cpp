#include<bits/stdc++.h>

using namespace std;

int main(){
     int n,e,s;
     cin>>n>>e>>s;
     //u,v,w
     vector<tuple<int,int,int>> edges;

     for(int i = 0;i<e;++i){
          int a,b,c;cin>>a>>b>>c;
          edges.push_back({a,b,c});
     }

     vector<int> dist(n,INT_MAX);
     dist[s] = 0;

     for(int i = 0;i<n-1;++i){
          for(auto [u,v,w] : edges){
               if(dist[u] != INT_MAX && dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
               }
          }
     }

     for(auto[u,v,w]:edges){
          if(dist[u] != INT_MAX && dist[u] + w < dist[v]){
            cout << -1 << endl;
            return 0;
     }
     }

     for(int i = 0;i<n;++i){
          cout<<dist[i]<<" ";
     }
     
}