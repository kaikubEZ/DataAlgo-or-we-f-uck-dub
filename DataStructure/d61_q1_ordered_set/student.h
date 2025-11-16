#include <vector>
using namespace std;
#include<bits/stdc++.h>
template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    v=A;bool is = false;
    for(auto j:B){
        for(auto i:v){
            if(i==j) {
                is = true;
            }

            if(!is){
                v.push_back(j);
                is = false;
            }
        }

    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    return v;
}
