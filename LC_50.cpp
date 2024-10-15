#include<bits/stdc++.h>
using namespace std;

double myPow(double x,double n){
    if(n==0)return 1;
    double half = myPow(x,n/2);
    if(int(n)%2==0)return half * half;
    else return half * half * x; 
}

int main(){
    double x,n;cin>>x>>n;
    if(n<0)n=-n,x=1/x;
    cout<<myPow(x,n);
}