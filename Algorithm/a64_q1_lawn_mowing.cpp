#include<bits/stdc++.h>

using namespace std;


int32_t main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n,m,k; cin>>n>>m>>k;
     vector<long long> arr(n+1);
     arr[0]=0;
     for(int i = 1;i<=n;++i){
          cin>>arr[i];
          arr[i]+=arr[i-1]+k;
          
     }

     while(m--){
          long long a,b;cin>>a>>b;
          auto it = upper_bound(arr.begin(),arr.end(),b+arr[a]);
          if(it == arr.begin()+1) {cout<<"0\n"; continue;}

          it--;
          cout<<*it-arr[a]-((it-arr.begin()-a)*k)<<"\n";
     }
}