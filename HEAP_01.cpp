#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    priority_queue<int> maxheap;//seclaration of maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;//declaration of min heap;
    vector<int> v(n);
    for(auto&i:v)cin>>i;
    for(int i=0;i<n;i++){
        maxheap.push(v[i]);
        if(maxheap.size()>k)maxheap.pop();
}
    cout<<maxheap.top();
}