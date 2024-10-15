#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int v[n+1][n+1],pfxs[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cin >> v[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            pfxs[i][j]=pfxs[i][j-1]+pfxs[i-1][j]-pfxs[i-1][j-1]+v[i][j];
        }
    }
    int q;cin >> q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pfxs[c][d]-pfxs[c][b-1]-pfxs[a-1][d]+pfxs[a-1][b-1];
    }
}


//  1      2       3     4
//  5      6       7      8
//  9      10      11     12