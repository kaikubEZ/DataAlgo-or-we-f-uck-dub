#include<bits/stdc++.h>

using namespace std;
int N,i,j,k;
vector<string> vect;
void recur(string s,int A,int B,int C){
     //base case
     if(s.length()== N) {
          vect.push_back(s);
          return;
     }
     //recur
     if(A<i) recur(s + "A",A+1,B,C);
     if(B<j) recur(s + "B",A,B+1,C);
     if(C<k) recur(s+  "C",A,B,C+1);


}

int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     cin>>N>>i>>j>>k;
     string s = "";
     recur(s,0,0,0);

     cout<<vect.size()<<endl;
     for(auto i:vect){
          cout<<i<<endl;
     }

}