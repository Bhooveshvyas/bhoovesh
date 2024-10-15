#include<bits/stdc++.h>
using namespace std;
// 147823
int dgt_sum(int n){
    if(n==0){
        return 0;
    }
    int dgt = n%10;
    return dgt+dgt_sum(n/10);
}
int main(){
    int n;
    cin >> n;
    cout<<dgt_sum(n);
}