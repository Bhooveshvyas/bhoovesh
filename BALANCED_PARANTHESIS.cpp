#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void solve(string s,int openct,int closect){
    if(openct==0 && closect==0){
        v.push_back(s);
        return;
    }
    if(openct>0){
        s.push_back('(');
        solve(s,openct-1,closect);
        s.pop_back();
    }    
    if(closect>0 && closect > openct){
        s.push_back(')');
        solve(s,openct,closect-1);
        s.pop_back();
    }
}

int main(){
    int n;cin>>n;
    string s;
    solve(s,n,n);
    for(auto i : v){
        cout<<i<<endl;
    }
}