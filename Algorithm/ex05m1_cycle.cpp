#include <bits/stdc++.h>
using namespace std;




bool DFS(int u,int p,vector<vector<int>> &adj,vector<bool> &visited){
     visited[u]=true;

     for(int v:adj[u]){
          if(!visited[v]){
               if(DFS(v,u,adj,visited)) return true;
          }

          else if(v!=p) return true;
     }
     return false;
}

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int t; cin>>t;
     
     
     while(t--){
          
          int n,e;cin>>n>>e;
          vector<vector<int>> adj(n);
          while(e--){
               int a1,a2;cin>>a1>>a2;
               
               adj[a1].push_back(a2);
               adj[a2].push_back(a1);
          }
          vector<bool> visited(n, false); // Tracks visited status for all vertices
          bool hasCycle = false;

          for (int i = 0; i < n; ++i) {
            // If the current vertex 'i' hasn't been visited, start a new DFS traversal
               if (!visited[i]) {
                // Call DFS, passing -1 as the initial parent
                    if (DFS(i, -1, adj, visited)) {
                         hasCycle = true;
                         break; // Cycle found, stop checking remaining components
                    }
               }
          }
          cout<< ((hasCycle)? "YES\n":"NO\n");
          
     }
     
}