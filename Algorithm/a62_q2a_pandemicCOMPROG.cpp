#include<bits/stdc++.h>
using namespace std;
int r,c,t;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin>>r>>c>>t;

    vector<vector<int>> arr(r,vector<int>(c));
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> temparr = arr;
    while(t--){
        
        bool temp = false;
        for(int i = 0; i<r;++i){
            for(int j = 0; j<c;++j){
                if(arr[i][j]==1){
                    if(i+1<r && arr[i+1][j]==0) temparr[i+1][j]=1;
                    if(j+1<c && arr[i][j+1]==0) temparr[i][j+1]=1;
                    if(j-1>=0 && arr[i][j-1]==0) temparr[i][j-1]=1;
                    if(i-1>=0 && arr[i-1][j]==0) temparr[i-1][j]=1;
                    
                }
                
            }
            
        }
        arr = temparr;
    }
    int check = 0;
    for(int i = 0;i<r;++i){
        for(int j = 0;j<c;++j){
            if(arr[i][j]==1) check++; 
        }
    }
    cout<<check;

}