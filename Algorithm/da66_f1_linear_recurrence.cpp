#include<bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int k,n;cin>>k>>n;
     vector<int> C(k),A(k);
     for(int i = 0;i<k;++i) cin>>C[i];
     for(int i = 0;i<k;++i) cin>>A[i];

     vector<int> dp(n+1,0);
     for(int i = 0;i<k;++i){
          dp[i] = A[i];
     }
     int temp = k;
     while(temp<=n){
          for(int i = 0;i<k;++i){
          dp[temp]+=((C[i] %32717) * (dp[temp-i-1] %32717)) % 32717;
          dp[temp] = dp[temp] % 32717;
          }
          temp++;
     }

     cout<<dp[n];
}