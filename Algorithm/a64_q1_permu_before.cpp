#include <bits/stdc++.h>
using namespace std;
int n,m; 
vector<int> sol;
bool used[100];
int excArr[100];
void recur(int len){
     if(len == n){
          for(auto i : sol) cout<<i<<" ";
          cout<<endl;
          return;
     }

     for(int i = 0;i<n;++i){
          if(used[i]) continue;

          if(excArr[i]!= -1 && !used[excArr[i]]) continue;

          used[i]=true;
          sol.push_back(i);
          recur(len + 1);
          sol.pop_back();
          used[i] = false;
     }
  
}

int main(){
     ios::sync_with_stdio(0); cin.tie(0);
     cin>>n>>m;
     fill(begin(excArr),end(excArr),-1);
     
     while(m--){
          int a,b;cin>>a>>b;
          excArr[b] = a;
     }
     recur(0);
}