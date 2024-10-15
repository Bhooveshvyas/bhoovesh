#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    set<string> s;
    while(t--){
        string str; cin >> str;
        s.insert(str);
    }
    cout<<endl;
    cout<<endl;
    for(auto i : s){
        cout<<i<<endl;
    }
}