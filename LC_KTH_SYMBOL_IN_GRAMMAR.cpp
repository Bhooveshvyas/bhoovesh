#include<bits/stdc++.h>
using namespace std;

int kthGrammar(int n,int k){
    if(n==1&&k==1)return 0;
    int mid = pow(2,n-2);
    if(k<=mid)return kthGrammar(n-1,k);
    if(k>=mid)return !kthGrammar(n-1,k-mid);
}

int main(){
    int n,k;cin>>n>>k;
    cout<<kthGrammar(n,k);
}