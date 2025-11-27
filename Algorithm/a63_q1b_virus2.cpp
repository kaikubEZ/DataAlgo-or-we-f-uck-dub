#include<bits/stdc++.h>
using namespace std;

int checkHowmany(vector<int> &arr){
    int ans=0;
    for(int i = 0;i<arr.size();++i){
        if(arr[i]) ans++;
    }
    return ans;
}

bool IsValid(vector<int> &arr){
    if(arr.size()<4) return false;
    if(arr.size()==4){
        vector<int> arr1(2),arr2(2);
        arr1.push_back(arr[0]);
        arr1.push_back(arr[1]);
        arr2.push_back(arr[2]);
        arr2.push_back(arr[3]);

        int diff = abs(checkHowmany(arr1) - checkHowmany(arr2));
        return (diff>1)? false:true;
    }
    vector<int> m(arr.size()/2),k(arr.size()/2);
    for(int i = 0;i<arr.size()/2;++i) {
        m.push_back(arr[i]);
        k.push_back(arr[i+arr.size()/2]);
    }
    return IsValid(m) && IsValid(k);

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m; cin>>n>>m;
    
    while(m--){
        vector<int> arr(1<<(m+1));
        int howMany = 1<<(m+1);
        while(howMany--){
            int temp;cin>>temp;
            arr.push_back(temp);
        }

        cout<< (IsValid(arr)) ? "yes" : "no";
    }
}