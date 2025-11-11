#include <bits/stdc++.h>

using namespace std;

int main(){
     map<string,int> vote;

     int n,k;
     cin>>n>>k;
     
     for(int i = 0; i < n; ++i){
          string name;
          cin>>name;
          vote[name]++;
     }

     vector<int> score;
     
     for(auto&p : vote){
          score.push_back(p.second);
     }

     sort(score.begin(),score.end(),greater<int>());

     
     if(score.size()<k) cout<<score[score.size() - 1];
     else cout<<score[k-1];
}