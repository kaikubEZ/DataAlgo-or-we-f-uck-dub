#include<bits/stdc++.h>
#define MD 100000007
using namespace std;

int n;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     cin>>n;
     vector<vector<int>> dp(n+1,vector<int>(3,0));
     //start
     dp[1][0] = 1;
     dp[1][1] = 1;
     dp[1][2] = 1;

     for(int i = 2;i<=n;++i){
          dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % MD;
          dp[i][1] = (dp[i-1][0] + dp[i-1][2])
     }


}