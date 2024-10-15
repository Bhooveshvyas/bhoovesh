#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;cin>>n;
    cout<<fact(n);
}

/*

TIME COMPLEXITY OF EVERY ITERATION ->N
NUMBER OF FUNCTION CALLS -> M
TIME COMPLEXTIY OF RECUSIVE FUNCTION -> N*M

*/