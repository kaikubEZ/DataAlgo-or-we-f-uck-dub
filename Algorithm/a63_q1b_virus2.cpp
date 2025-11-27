#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> a){
    if(a.size() == 2){
        return true;
    }

    vector<int> l(a.size()/2);
    vector<int> r(a.size()/2);
    int en = (a.size()/2);
    for(int i = 0;i<en;i++){
        l[i] = a[i];
    }

    int inx = 0;
    for(int i = en; i < a.size() ;i++){
        r[inx++] = a[i];  
    }

    int check_n_l = 0;
    for(int i = 0;i < l.size() ;i++){
        if(l[i] == 1) check_n_l++;
    }

    int check_n_r = 0;
    for(int i = 0;i < r.size() ;i++){
        if(r[i] == 1) check_n_r++;
    }
    if(abs(check_n_l-check_n_r) > 1){
        return false;
    }
    else{
        return check(l) && check(r);
    }
    
}


int main(){
    int n,k;
    cin >> n >> k;

    int lenght = 1 << k;

    while (n--)
    {
        vector<int> dna(lenght);
        for(int i = 0;i<lenght;i++){
            cin >> dna[i];
        }

        if(check(dna)){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }
    }
    


}