#include <bits/stdc++.h>
using namespace std;

int main(){
     cin.tie(0)->sync_with_stdio(0);

     int n,q;cin>>n>>q;

     vector<pair<int,int>> arr;
     for(int i = 0;i<n;++i){
          int a,b;cin>>a>>b;
          arr.push_back(make_pair(a,b));
     }
     sort(arr.begin(),arr.end());
     
     vector<int> s(n);
     s[0] = arr[0].second;
     for(int i = 1;i<n;++i){
          s[i] = s[i-1] + arr[i].second;
     }
     while(q--){
          int count = 0;
          cin>>n;
          cout<<arr[upper_bound(s.begin(),s.end(),n-1) - s.begin()].first<<"\n";

     }
}