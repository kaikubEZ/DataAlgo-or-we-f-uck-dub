#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<vector<int>> tri(n);
    for(int i = 0; i < n; i++){
        tri[i].resize(i + 1);
        for(int j = 0; j <= i; j++){
            cin >> tri[i][j];
        }
    }

    vector<vector<int>> dp(n);

    for(int i = 1;i<n;++i){
        for(int j = 0;j <= i;++j){
            if(j>0) dp[i][j] = max(dp[i][j],dp[i-1][j-1]+tri[i][j]);
            if(j < i) dp[i][j] = max(dp[i][j], dp[i-1][j] + tri[i][j]);
        }
    }
    
    int ans = *max_element(dp[n-1].begin(), dp[n-1].end());
    cout << ans << endl;
    
}