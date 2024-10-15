#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int maxrow=n-1;
    int maxcol=n-1;
    int minrow=0;
    int mincol=0;
    int count = 0;
    int tne=n*n;
    while(count<tne){
        for(int i=mincol;i<=maxcol;i++){
            cout<<arr[minrow][i]<<" ";
            count++;
        }
            minrow++;
        for(int i=minrow;i<=maxrow;i++){
            cout<<arr[i][maxcol]<<" ";
            count++;
        }
            maxcol--;
        for(int i=maxcol;i>=mincol;i--){
            cout<<arr[maxrow][i]<<" ";
            count++;
        }
            maxrow--;
        for(int i=maxrow;i>=minrow;i--){
            cout<<arr[i][mincol]<<" ";
            count++;
        }
            mincol++;
    }    
}