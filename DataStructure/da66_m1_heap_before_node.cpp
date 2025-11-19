#include<bits/stdc++.h>
using namespace std;

int n,m,i; 
bool recur(int x){
     if(x<m) {
          return false;
     }
     else if(x==m) return true;
     
     return recur((x-1)/2);
}

int main(){
     cin>>n>>m;
     vector<int> v;
     while(i<n){
          if(i == m || recur(i)){
               ++i;
               continue;
          }
          v.push_back(i);

          ++i;
     }
    

     cout<<v.size()<<endl;
     for(auto j:v){
          cout<<j<<" ";
     }
}