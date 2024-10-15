/*
GIVEN N STRINGS AND Q QUERIES,
IN EACH QUERY YOU ARE GIVEN A STRING AND YOU NEED TO PRINT THE FREQUENCY OF THAT STRINGS. 
N <= 10^6
|S|<=100
Q <= 10^6
*/
#include<bits/stdc++.h>
using namespace std;

void print_map(unordered_map<string, int> um){
    for(auto i : um){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){
    int q;    cin >> q;
    unordered_map<string, int> um;
    while(q--){
        string str;
        cin >> str;
        um[str]++;
    }
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        cout<<um[str]<<endl;
    }
}