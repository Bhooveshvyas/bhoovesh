#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<long long int, int> m;
    for(int i=0;i<n;i++){
        long long int x; cin >>x;
        m[x]++;
    }
    int max_rec = 0;
    for(auto i : m){
        if(i.second>max_rec){
            max_rec=i.second;
        }
        // cout<<i.first<<" "<<i.second<<endl;
    }
    // cout<<max_rec<<endl;
    int singers = 0;
    for(auto i : m){
        if(max_rec==i.second){
            singers++;
        }
    }
    cout<<singers;
}