#include<bits/stdc++.h>
using namespace std;

int solve(char source,char helper,char destination,int n,int &ct){
    if(n==0){
        return 0;
    }
    // int ct;
    solve(source,destination,helper,n-1,ct);
    cout<<"FOR DISK "<<n<<" GO FROM "<<source<<" TO "<<destination<<endl;ct++;
    solve(helper,source,destination,n-1,ct);
    return pow(2,n)-1;;
}

int main(){
    int n;cin>>n;
    int ct=0;
    cout<<solve('A','B','C',n,ct);
}