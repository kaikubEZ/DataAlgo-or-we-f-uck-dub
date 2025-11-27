#include <bits/stdc++.h>
using namespace std;

int main() {
     cin.tie(0)->sync_with_stdio(0);

     int n, m;
     cin >> n >> m;

     vector<int> A(n);
     for (int i = 0; i < n; i++) cin >> A[i];
     
     while(m--){
          int a;cin>>a;
          int it = 0;
          for(auto i:A){
               if(i != a) it++;
               else break;
          }
          int temp = 0;
          for(int i = 0;i<=it;++i){
               if(A[i]>a) temp++;
          }

          cout<<temp<<"\n";
     }

    
}
