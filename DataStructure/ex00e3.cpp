#include<bits/stdc++.h>

using namespace std;

int main(){
     int n;
     cin>>n;
     unordered_set<int> a;
     for(int i = 1; i <= n; ++i){
          int j;
          cin>>j;

          if(a.find(j)!=a.end() || j > n || j<1){
               cout<<"NO";
               return 0;
          }
          a.insert(j);

          if(i==n) cout<<"YES";
     }
}