#include<bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int r,c;cin>>r>>c;
     vector<vector<int>> seaMap(r,vector<int>(c)),dist(r,vector<int>(c,-1));
     queue<pair<int,int>> q;
     for(int i = 0;i<r;i++){
          for(int j = 0;j<c;++j){
               cin>>seaMap[i][j];
               if(seaMap[i][j]==1){
                    q.push({i,j});
                    dist[i][j]=0;
               }
          }
     }

     //BFS
     int dr[] = {-1, 1, 0, 0};
     int dc[] = {0, 0, -1, 1};

     while(!q.empty()){
          auto[R,C] = q.front();
          q.pop();

          if(seaMap[R][C]==2){
               cout<<dist[R][C] + 1<<'\n';
               return 0;
          }

          for(int i = 0;i<4;++i){
               int nr = R + dr[i];
               int nc = C + dc[i];

               if(nr>=0&&nr<r && nc>=0 && nc<c 
                    && dist[nr][nc] == -1&& seaMap[nr][nc]!=3 ){
                         
                         dist[nr][nc] = dist[R][C] + 1;
                         q.push({nr, nc});
                    }
          }
     }
}