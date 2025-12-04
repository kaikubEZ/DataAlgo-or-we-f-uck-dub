#include<bits/stdc++.h>

using namespace std;

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int r,c,k;
     cin>>r>>c>>k;
     vector<vector<int>> arr(r,vector<int> (c));
     //border extend BFS
     queue<tuple<int,int,int>> q;//timer
     for(int i = 0;i<r;++i){
          for(int j = 0;j<c;++j){
               int temp;
               cin>>temp;
               arr[i][j] = temp;
               if(temp == 1) q.push({0,i,j});
          }
     }
     
     while(!q.empty()){
          auto [t,x,y] = q.front();
          q.pop();
          if(t>=k) break;
          if(x+1<r &&arr[x+1][y] == 0) {arr[x+1][y]=2;q.push({t+1,x+1,y});}
          if(x-1>=0 &&arr[x-1][y] == 0) {arr[x-1][y]=2;q.push({t+1,x-1,y});}
          if(y+1<c &&arr[x][y+1] == 0) {arr[x][y+1]=2;q.push({t+1,x,y+1});}
          if(y-1>=0 &&arr[x][y-1] == 0) {arr[x][y-1]=2;q.push({t+1,x,y-1});}
          
          
     }
     
     for(int i = 0;i<r;++i){
          for(int j = 0;j<c;++j){
               cout<< arr[i][j]<<" ";
          }
          cout<<'\n';
     }
     
     
}