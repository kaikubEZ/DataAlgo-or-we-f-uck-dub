#include<bits/stdc++.h>
using namespace std;





int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    vector<int> v(n);
    
    for(int i = 0;i<n;++i){
        int temp;cin>>temp;
        v[i]=temp;
    }
    while (m--) {
        int k;
        cin >> k;
        int lhs = 0;
        int rhs = v.size();
        while (lhs < rhs) {
            int mid = (lhs + rhs) / 2;
            if (v[mid] <= k) {
                lhs = mid + 1;
            }
            else {
                rhs = mid;
            }
        }
        cout << lhs - 1 << '\n';
    }
    
    
}