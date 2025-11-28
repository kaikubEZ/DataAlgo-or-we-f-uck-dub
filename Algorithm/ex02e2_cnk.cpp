#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,k;cin>>n>>k;
    int minVal = min(k,n-k);

    unsigned long long ans=1;
    for(int i = n;i>n-minVal;--i){
        ans*=i;
    }
    for(int i = 2;i<=minVal;++i){
        ans/=i;
    }
    cout<<ans;
}