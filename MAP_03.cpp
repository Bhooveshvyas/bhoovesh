/*
GIVEN N STRINGS .
PRINT UNIQUE STRINGS IN LEXIOGRAPHICALLY ORDER WITH THIER FREQUENCY. 
N <= 10^5
|S|<=100
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    map<string, int> m;
    while(t--){
        string str;
        cin >> str;
        m[str]++;
    }
        for(auto i : m){
            cout<<i.first<<" "<<i.second<<endl;
        }
}