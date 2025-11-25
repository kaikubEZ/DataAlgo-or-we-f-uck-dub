#include<bits/stdc++.h>
using namespace std;



bool IsVirus(vector<int> &v,int start,int end,bool reverse){
     if(end - start ==1){
          if(reverse) {
               if(v[start] == 1 && v[end] == 0) return 1;
               else return 0;
          }
          else {
               if(v[start] == 0 && v[end] == 1) return 1;
               else return 0;
          }
     }
     
     int half = (end + start)/2;
     if(!reverse) {
          return (IsVirus(v,start,half,true) || IsVirus(v,start,half,false)) && IsVirus(v,half+1,end,false);
     }
     else return IsVirus(v,start,half,true) && ((IsVirus(v,half +1,end,true)) || IsVirus(v,half+1,end,false));
}

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);

     int n,m; cin>>n>>m;
     while(n--){
          vector<int> a(1<<m);
          for(int i = 0; i< 1<<m ;++i){
               cin >> a[i];
          }
          bool check = IsVirus(a,0,a.size() - 1,false);
          
          
          cout << ((check) ? "yes\n" : "no\n");
     }
}