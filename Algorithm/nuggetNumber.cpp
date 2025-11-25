#include<bits/stdc++.h>
using namespace std;

bool test(int n){
     if(n==0) return true;
     if(n<0) return false;

     return test(n-6)||test(n-9)||test(n-20);
}

int main(){
     int n; cin>>n;

     if(n-6 < 0) {
          cout<<"no\n";
          return 0;
     }

     for(int i = 6;i<=n;++i){
          if(test(i)) cout<<i<<"\n";
     }
}