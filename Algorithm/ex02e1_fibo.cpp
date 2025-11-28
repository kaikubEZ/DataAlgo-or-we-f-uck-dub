#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    long long ans = 0;
    for(long long i = 0;i<=n;++i){
        ans +=i;
    }
    cout<<ans;


}