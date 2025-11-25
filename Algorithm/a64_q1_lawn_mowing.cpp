#include<bits/stdc++.h>

using namespace std;


int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n,m,k; cin>>n>>m>>k;
     int arr[n];
     for(int i = 0;i<n;++i){
          int temp;cin>>temp;
          arr[i] = temp;
     }

     while(m--){
          int a,b;cin>>a>>b;
          int cost = k;
          int index = a;
          while(true){
               if(cost > b) break;
               cost += arr[index] + k;
               index++;
          }

          cout<<index--<<endl;
     }
}