#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> student[25];
int dayCount[1005];
int currentCover = 0;
int minStudent = 100;

void solve(int k, int picked){
    if(picked >= minStudent) return;

    if(currentCover == n){
        minStudent = min(minStudent, picked);
        return;
    }

    if(k == m) return;

    // ---- choose student k ----
    int newCover = 0;
    for(int day : student[k]){
        if(dayCount[day] == 0) newCover++;
    }

    // apply
    currentCover += newCover;
    for(int day : student[k]) dayCount[day]++;

    solve(k+1, picked + 1);

    // undo
    currentCover -= newCover;
    for(int day : student[k]) dayCount[day]--;

    // ---- skip student k ----
    solve(k+1, picked);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for(int i=0;i<m;i++){
        int k; cin >> k;
        while(k--){
            int d; cin >> d;
            student[i].push_back(d);
        }
    }

    solve(0,0);
    cout << minStudent << "\n";
}
