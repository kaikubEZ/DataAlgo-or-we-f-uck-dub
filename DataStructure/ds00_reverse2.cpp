#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b){
     
     for(vector<int>::iterator m = b - 1; m> a; --m, ++a){
          int temp = *m;
          *m = *a;
          *a = temp;
     }
}

int main(){
     
     int n, a, b;
     cin >> n;
     vector<int> v;
     for (int i = 0; i < n; i++) {
          int c;
          cin >> c;
          v.push_back(c);
     }
     cin >> a >> b;
    
     reverse(v, v.begin() + a, v.begin() + b + 1);
    
     for (auto &x : v){
          cout << x << " ";
     }
     cout << endl;
}