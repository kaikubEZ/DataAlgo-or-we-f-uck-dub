#include<bits/stdc++.h>
using namespace std;

bool IsVirus(vector<int> &v, int l, int r) {
    int len = r - l + 1;

    // base case: size = 2
    if (len == 2) {
        return (v[l] == 0 && v[l+1] == 1);
    }

    int mid = (l + r) / 2;

    // extract left and right segments
    vector<int> L(v.begin() + l, v.begin() + mid + 1);
    vector<int> R(v.begin() + mid + 1, v.begin() + r + 1);

    // reverse version of L
    vector<int> LR = L;
    reverse(LR.begin(), LR.end());

    // check R must be normal virus
    if (!IsVirus(v, mid+1, r)) return false;

    // check L natural
    if (IsVirus(v, l, mid)) return true;

    // check L reversed (use temporary array)
    {
        vector<int> tmp = v;
        for (int i = 0; i < (int)L.size(); i++) {
            tmp[l + i] = LR[i];
        }
        if (IsVirus(tmp, l, mid)) return true;
    }

    return false;
}


int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);

     int n,m; cin>>n>>m;
     while(n--){
          vector<int> a(1<<m);
          for(int i = 0; i< 1<<m ;++i){
               cin >> a[i];
          }
          bool check = IsVirus(a,0,a.size() - 1);
          cout << ((check) ? "yes\n" : "no\n");
     }
}