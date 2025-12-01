#include<bits/stdc++.h>
using namespace std;


int BFS(int start, int k, vector<vector<int>> &adj, int n) {
    vector<int> dist(n, -1); // -1 means not visited
    queue<int> q;
    
    q.push(start);
    dist[start] = 0;
    int count = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        count++; // Count this vertex
        
        // Only explore neighbors if we haven't reached K steps yet
        if (dist[u] < k) {
            for (int v : adj[u]) {
                if (dist[v] == -1) { // Not visited
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }
            }
        }
    }
    
    return count;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,e,k;
    cin>>n>>e>>k;
    
    vector<vector<int>> adj(n);

    for(int i = 0;i<e;++i){
        int temp1,temp2;
        cin>>temp1>>temp2;

        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1);

    }
    vector<bool> visited(n,false);
    
    int MaxGroup = INT_MIN;
    for(int i = 0;i<n;++i){
        if(!visited[i]){
            int compSize = BFS(i,k,adj,n);
            MaxGroup = max(MaxGroup,compSize);
        }

    }

    cout<<MaxGroup;
}