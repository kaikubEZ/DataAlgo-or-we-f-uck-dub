#include<bits/stdc++.h>
using namespace std;

queue<int> q;
vector<int> v;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n,a,tmp;
     cin>>n>>a;
     q.push(a);
     while(!q.empty()){
          tmp =q.front();
          q.pop();
          v.push_back(tmp);
          if(tmp*2 + 1 < n) q.push(tmp*2 +1);
          if(tmp*2 + 2<n) q.push(tmp*2 + 2);
     }
     cout<<v.size()<<endl;
     for(auto i:v) cout<<i<<" ";
     
}