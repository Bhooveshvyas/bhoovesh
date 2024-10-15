#include<bits/stdc++.h>
using namespace std;

void temp(vector<int>& v, int key, int s, int e);
int solve(vector<int>& v,int k,int s,int e,int mid){
    while(s<=e){
        mid=s+(e-s)/2;
        if(v[mid]==k)return mid;
        if(v[mid]<k){
            temp(v,k,s,e);
        }
        else e=mid-1;;
    }
    return -1;
}

void temp(vector<int>& v,int key,int s,int e){
    while(key>v[e]){
        s=e;e=e*2;
    }
    solve(v,key,s,e,s+(e-s)/2);
}


int main(){
    vector<int> v = {1,2,3,4,5,6,7,7,8,9,12,13,141,1551,15551,155565,556543};
    int key=15551;
    cout<<solve(v,key,0,v.size()-1,+(v.size()-0)/2);
}