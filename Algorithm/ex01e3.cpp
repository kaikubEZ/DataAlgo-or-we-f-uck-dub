#include<bits/stdc++.h>
using namespace std;

int manual_binary_search_floor(int A[], int n, int target) {
    
    int low = 1;
    int high = n;
    int ans = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] <= target) {
            
            ans = A[mid];
            low = mid + 1;
        } else {
            
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
     cin.tie(0)->sync_with_stdio(0);
     int n,m;
     cin>>n>>m;
     int A[n+1] ;
     A[0] = -1;
     for(int i = 1;i<=n;++i){
          cin>>A[i];
     }
     while(m--){
          int t;
          cin>>t;
          cout<<manual_binary_search_floor(A,n,t)<<"\n";
     }
}