#include<bits/stdc++.h>
using namespace std; 
int n;

int maxDia(vector<vector<int>> &v){
    int maxPos = INT_MIN;

    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            int currentSum = 0;
            for(int p = 0;i+p<n &&j+p<n;++p){
                currentSum+=v[i+p][j+p];
                maxPos = max(currentSum,maxPos);
            }

        }
    }

    return maxPos;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0;i<n;++i){
        for(int j = 0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    cout<<maxDia(arr);


}