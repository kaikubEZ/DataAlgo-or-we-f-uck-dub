#include <bits/stdc++.h>

using namespace std;

int main(){
     ios::sync_with_stdio(0);cin.tie(0);
     int n,m,a,b;
     cin>>n>>m;

     vector<int> nValue;
     
     for(int i = 0;i<n;++i){
          cin>>a>>b;
          nValue.push_back(-(a*100 + b));
     }
     sort(nValue.begin(),nValue.end());
     for(size_t i = 0;i<m;++i){
          cin>>a>>b;

          auto lastPos = (lower_bound(nValue.begin(),nValue.end(),-(a*100 + b)));
          //too soon
          if(lastPos == nValue.end()){
               cout<<"-1 -1 ";
          }
          //found it
          else if((*lastPos) == -(a*100 + b)){
               cout<<"0 0 ";
          } 
          //last case
          else{
               cout<<-1*(*lastPos / 100) << " " << -1*(*lastPos%100)<<" ";
          }
     }
}
