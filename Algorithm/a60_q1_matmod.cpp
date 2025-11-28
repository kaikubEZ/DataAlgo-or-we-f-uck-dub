#include<bits/stdc++.h>
using namespace std;

vector<long long> mul(vector<long long> &A,vector<long long> &B, long long k){
    vector<long long> returning(4);
    returning[0]=(A[0]*B[0] + A[1]*B[2])%k;
    returning[1]=(A[0]*B[1] + A[1]*B[3])%k;
    returning[2]=(A[2]*B[0] + A[3]*B[2])%k;
    returning[3]=(A[2]*B[1] + A[3]*B[3])%k;

    return returning;
}

vector<long long> power(vector<long long> base,long long n,long long k){

    //identity matrix
    vector<long long> result= {1,0,0,1};

    while(n>0){
        if(n & 1) result = mul(result,base,k);

        base = mul(base,base,k);        
        n>>=1;
    }
    return result;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    long long n,k;cin>>n>>k;
    vector<long long> v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];

    vector<long long> ans = power(v,n,k);
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3];
}