#include<bits/stdc++.h>

using namespace std;


int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int n, m ,k;
     cin>>n>>m>>k;
     int a[n];
     
     for(int i = 0; i<n;++i){
          cin>>a[i];
     }
     sort(a,a+n);
     for(int i = 0;i<m;++i){
          int temp;cin>>temp;
          cout<< upper_bound(a,a+n,temp + k) - lower_bound(a,a+n,temp-k) << " ";
     }

}