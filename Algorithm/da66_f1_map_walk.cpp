#include<bits/stdc++.h>

using namespace std;

vector<string> ans;
int r,c;

void recur(int x, int y, const vector<vector<int>>& arr, vector<vector<int>>& visited, string s = ""){
     if(x<0||y<0||x>=r||y>=c) return;
     if(arr[x][y]==1||visited[x][y]) return;

     if(x==r-1&&y==c-1) {
          cout<<s<<'\n';
          return;
     }

     visited[x][y]=1;

     if(y+1<c&& arr[x][y+1] != 1) recur(x, y + 1, arr, visited, s + "A");
     if(x+1<r&& arr[x+1][y] != 1) recur(x + 1, y, arr, visited, s + "B");
     if(x-1>=0&& arr[x-1][y] != 1) recur(x - 1, y, arr, visited, s + "C");

     visited[x][y]=0;
}

int main(){
     cin.tie(0)->sync_with_stdio(0);

     cin>>r>>c;

     vector<vector<int>> arr(r, vector<int>(c));
     for(int i = 0;i<r;++i){
          for(int j =0;j<c;++j){
               int k; cin>>k;
               arr[i][j]=k;
          }
     }
     vector<vector<int>> visited(r, vector<int>(c));
     recur(0,0,arr,visited);

     
     cout<<"DONE";
}