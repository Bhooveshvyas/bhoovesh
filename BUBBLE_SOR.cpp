#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        bool f=true;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1])swap(v[j],v[j+1]);
            f=false;
        }if(f)break;
    }
}

int main(){
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin >> v[i];
    bubbleSort(v,n);
    for(auto i : v)cout<<i<<" " ;
}