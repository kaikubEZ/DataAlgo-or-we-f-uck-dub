#include<bits/stdc++.h>
using namespace std;

vector<int> tempo;
void DFS(int k,vector<vector<int>> &adj,vector<bool> &used){
    used[k] = true;
    tempo.push_back(k);
    
    for(auto i:adj[k]){
        if(!used[i]){
            DFS(i,adj,used);
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int v,e;
    cin>>v>>e;

    vector<vector<int>> adj(v);
    vector<bool> used(v,false);
    for(int i = 0;i<e;++i){
        int tmp1,tmp2;cin>>tmp1>>tmp2;
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    int count = 0;
    for(int i = 0;i<adj.size();++i){
        if(adj[i].size()==0){
            used[i] = true;
            count++;
        }
        
    }

    for(int i = 0;i<v;++i){
        if(used[i]) continue;

        DFS(i,adj,used);
        bool pass = false;
        int IsOne = 0;
        for(auto j:tempo){
            if(adj[j].size()==1) IsOne++;
            if(adj[j].size()>2) {
                pass = false;
                break;
            }
            else pass = true;
        }
        if(pass && IsOne == 2){
            count++;
        }
        
        tempo = {};
    }

    cout<<count;

}