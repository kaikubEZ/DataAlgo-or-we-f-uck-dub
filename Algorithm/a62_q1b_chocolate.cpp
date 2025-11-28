#include<bits/stdc++.h>
using namespace std;
#define MOD 1000003

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    vector<int> v(k);
    for(int i = 0;i<k;++i) cin>>v[i];

    vector<long long> dp(n+1,0);
    dp[0] = 1;

    for(int i = 1;i<=n;++i){
        for(auto j:v){
            if(i-j>=0){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }

    cout<<dp[n]<<"\n";

}