#include<bits/stdc++.h>
using namespace std;

void H(vector<vector<int>> &v,int a,int b,int top,int left,int size){
     if(a==0){
          v[top][left] = b;
          return;
     }
     int half = size / 2;
     H(v,a-1,b,    top,      left      ,half);
     H(v,a-1,b-1,  top,      left+half ,half);
     H(v,a-1,b+1,  top+half, left      ,half);
     H(v,a-1,b,    top+half, left+half ,half);
}

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     
     int a,b;cin>>a>>b;
     
     int n = 1 << a;
     vector<vector<int>> arr(n,vector<int>(n));
     H(arr,a,b,0,0,n);

     for(int i = 0;i<n;++i){
          for(int j = 0;j<n;++j){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     } 

}