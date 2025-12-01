#include<bits/stdc++.h>
using namespace std;

int r,c,t;
queue<tuple<int,int,int>> q;//timer,x cordinate,y cor

void BFS(vector<vector<int>> &arr){
    
    while(!q.empty()){
        auto [checkT, i, j] = q.front();
        q.pop();
        if(checkT > t) break;
        if(i+1<r && arr[i+1][j]==0) {
            arr[i+1][j]=1;
            q.push({checkT+1,i+1,j});
           
        }
        if(j+1<c && arr[i][j+1]==0) {
            arr[i][j+1]=1;
            q.push({checkT+1,i,j+1});
        }
        if(j-1>=0 && arr[i][j-1]==0) {
            arr[i][j-1]=1;
            q.push({checkT+1,i,j-1});
        }
        if(i-1>=0 && arr[i-1][j]==0) {
            arr[i-1][j]=1;
            q.push({checkT+1,i-1,j});
        }

    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin>>r>>c>>t;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            if(arr[i][j]==1)  q.push({1,i,j});
        }
    }
    BFS(arr);
    int count = 0;
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            if(arr[i][j]==1) count++;
        }
    }
    cout<<count;
}