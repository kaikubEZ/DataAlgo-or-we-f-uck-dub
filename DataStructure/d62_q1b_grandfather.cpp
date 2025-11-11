#include<bits/stdc++.h>
using namespace std;

map<string,string> father;

string getGrandfather(string son){
     if(father.find(son) != father.end()){
          string f = father[son];
          if(father.find(f) != father.end()){
               string grandfather = father[f];
               return grandfather;
          }
          else{
               return "WTFNOBRO";
          }
     }
     else{
          return "WTFNOBRO";
     }
}

int main(){
     int n,m;
     cin>>n>>m;
     ios::sync_with_stdio(0);
     cin.tie(0);
     for(int i = 0;i<n;++i){
          string f,s;
          cin>>f>>s;
          father[s] = f;
     }
     for(int i = 0;i<m;++i){
          string j,k;
          cin>>j>>k;
          if(getGrandfather(j)!= "WTFNOBRO" && getGrandfather(k)!= "WTFNOBRO" && getGrandfather(j)==getGrandfather(k) && j!=k ){
               cout<<"YES\n";
          }
          else cout<<"NO\n";
          
     }
}