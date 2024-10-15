#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
