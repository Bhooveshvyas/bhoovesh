#include<bits/stdc++.h>
using namespace std;

void printt(int n){
    if(n==1){
        cout<<1<<" ";
        return ;
    }
    printt(n-1);
    cout<<n<<" ";
    return ;
}

void print(int n,int x)
{
    if(x==n){
        cout<<n<<" ";
        return ;
    }
    print(n,x+1);
    cout<<x<<' ';
    return;
}
int main(){
    int n;
    cin >> n;
    print(n,1);
    cout<<endl;
    printt(n);
}