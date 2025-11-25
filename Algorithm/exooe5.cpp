#include<bits/stdc++.h>
using namespace std;
int len,adjacent;

void recur (int idx,string s = ""){
     if(s.length()== len){
          int cnt = 0;
          for(auto c:s){
               if(c=='1')cnt+=1;
               if(c=='0')cnt=0;

               if(cnt == adjacent) {cout<<s<<'\n';
               break;
               }
          }
          return;
     }

     recur(idx + 1,s + "0");
     recur(idx + 1,s + "1");
}

int main(){
     cin>>len>>adjacent;
     recur(0);
}