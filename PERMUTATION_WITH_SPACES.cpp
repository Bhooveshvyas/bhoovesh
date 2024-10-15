#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void solve(string ip,string op){
    if(ip.length()==0){
        // cout<<op<<endl;
        v.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    op2.push_back('_');
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op2);
    solve(ip,op1);
}

int main(){
    string ip;
    cin >> ip;
    string op="";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op);
    for(auto i : v)cout<<i<<endl;
}