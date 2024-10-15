#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int sumr;

    int sumc;

    int k = min(n,m);

    int index = 0;

    for(int i=0;i<k;i++,index++){
        sumc=0,sumr=0;
        for(int j=0;j<m;j++){
            sumr += a[0][j];
        }for(int j=0;j<n;j++){
            sumc += a[j][i];
        }
        if(sumc==sumr){
            cout<<i+1;
            break;
        }
    }   
}