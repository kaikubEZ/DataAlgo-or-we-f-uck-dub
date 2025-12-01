#include<bits/stdc++.h>
using namespace std;
vector<int> parent(2000,-1);
int ans = 0;

int findSet(int n){
     //based
     if(parent[n]==-1) return n;
     //recur
      return parent[n] = findSet(parent[n]);
     
}

void unionSet(int u,int v,int idx,vector<tuple<int,int,int>> &G){
     int SetU = findSet(u);
     int SetV = findSet(v);
     
     if(SetU == SetV) return;
     parent[SetU] = SetV;
     ans+= get<0>(G[idx]);

}

int main(){
     cin.tie(0)->sync_with_stdio(0);
     
     int n;cin>>n;

     vector<tuple<int,int,int>> G;
     //weight,initial,v;

     for(int i = 0;i<n;++i){
          for(int j = i+1;j<n;j++){
               int temp; cin>>temp;
               G.push_back({temp,i,j});
          }
     }

     sort(G.begin(),G.end());
     for(int i = 0;i<G.size();++i){
          unionSet(get<1>(G[i]),get<2>(G[i]),i,G);
     }

     cout<<ans;

}
