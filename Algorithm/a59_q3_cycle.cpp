#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;
vector<bool> used;
vector<int> dist;
int ans = 0;
bool DFS(int u,int p,int d){
    if(used[u]){
        ans = d - dist[u];
        return true;
    }
    used[u] = true;
    dist[u] = d;
    for(auto v : adj[u]){
        if(v==p) continue;
        if(DFS(v,u,d+1)) return true;;
    }
    return false;
}
//Find Cycle in Tree
int main(){
    cin.tie(0)->sync_with_stdio(0);

    cin>>n;
    adj.resize(n);
    used.assign(n,false);
    dist.resize(n);
    for(int i = 0; i<n;++i){
        int temp1,temp2; cin>>temp1>>temp2;

        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1);
    }
    DFS(0,-1,0);

    cout<<ans;
}