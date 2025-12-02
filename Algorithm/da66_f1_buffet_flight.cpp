#include<bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int n,m;
     cin>>n>>m;
     vector<int> ci(n),co(n);
     for(int i = 0;i<n;++i) cin>>ci[i];
     for(int i = 0;i<n;++i) cin>>co[i];

     vector<vector<int>> graph(n);
     while(m--){
          int a,b;cin>>a>>b;
          graph[a].push_back(b);
     }

     //dijkstra algo
     vector<int> dist(n,-1);
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

     dist[0] = 0;
     pq.push({0,0});

     while(!pq.empty()){
          auto [cost,u] = pq.top();
          pq.pop();

          if(dist[u]!=1 && cost > dist[u]) continue;

          for(int v:graph[u]){
               int newCost = cost + co[u]+ci[v];

               if(dist[v] ==-1 || newCost < dist[v]){
                    dist[v] = newCost;
                    pq.push({newCost,v});
               }
          }
     }
     for(int i = 0;i<n;++i){
          cout<<dist[i]<<" ";
     }
     cout<<'\n';
}