#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     vector<vector<int>> v(n,vector<int>(n));

     for(int i = 0;i<n;++i){
          for(int j = 0;j<n;++j){
               int temp; cin>>temp;
               v[i][j] = temp;
          }
     }

     vector<int> dist(n,INT_MAX);
     priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

     dist[0] = 0;
     pq.push({0,0});

     while(!pq.empty()){
          auto [d,u] = pq.top();
          pq.pop();
          if(d>dist[u])continue;

          for(int i = 0;i<n;++i){
               if(v[u][i] != -1 && v[u][i] != 0){
                    int newDisk = dist[u] + v[u][i];
                    if(newDisk < dist[i]){
                         dist[i]=newDisk;
                         pq.push({newDisk,i});
                    }
               }
          }
     }

     int maxDisk = INT_MIN;
     for(int i = 1;i<n;++i){
          if(dist[i] == INT_MAX){
               cout<<"-1\n";
               return 0;
          }
          maxDisk = max(maxDisk,dist[i]);
     }
     cout<<maxDisk<<endl;
}