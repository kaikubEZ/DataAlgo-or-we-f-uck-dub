#include<bits/stdc++.h>
using namespace std;
int n,m;

void recur(int len,int ones,string sol = ""){
     //base case
     if(len == m){
          if(ones == n) cout<<sol<<"\n";
          return;
     }

     //recur case
     int remainSlots = m - len - 1;
     int needOne = n - ones;

     if(remainSlots >= needOne) recur(len + 1,ones,sol + "0");

     if(ones < n) recur(len + 1,ones + 1,sol + "1");

}

int main(){
     ios::sync_with_stdio(0); cin.tie(0);
     cin>>n>>m;

     recur(0,0);

}