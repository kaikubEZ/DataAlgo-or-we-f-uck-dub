#include<bits/stdc++.h>
using namespace std;

int n;


int main(){
     cin.tie(0)->sync_with_stdio(0);

     cin>>n;
     vector<int> degree_count(n);
     int max_degree = 0;

     for(int i = 0;i<n;++i){
          for(int j = 0;j<n;++j){
               int t;cin>>t;
               if(t==0) continue;

               ++degree_count[i];
               max_degree = max(max_degree, degree_count[i]);
          }
     }

     vector<int> ans(max_degree+1);
     for(int i = 0;i<degree_count.size();++i){
          ans[degree_count[i]]++;
     }

     for(auto i : ans){
          cout<<i<<" ";
     }


     
}