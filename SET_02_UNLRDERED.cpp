#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    unordered_set<string> s;
    while(n--){
        string str; cin >> str;
        s.insert(str);
    }
    int q; cin >> q;
    while(q--){
        string str; cin >> str;
        auto it = s.find(str);
        if(it!=s.end()){
            cout<<"yes"<<endl;
        }else cout<<"no"<<endl;
    } 
}