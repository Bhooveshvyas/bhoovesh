#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector<int> v){
    cout<<v.size()<<endl;
    for(auto i : v){
        cout<<i<<" ";
    }
}

int main() {
    int n; cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        v.erase(x);
    }
    return 0;
}
