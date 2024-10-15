#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void solve(int index,int n,vector<int> &f,string curr){
    if(index==n){
        v.push_back(curr);
        return;
    }
    for(int i=0;i<26;i++){
        if(f[i]>0){
            f[i]--;
            v.push_back(curr);
            solve(index+1,n,f,curr+char('a'+i));
            f[i]++;
        }
    }
    return;
}

vector<vector<string>> partition(string s) {
    vector<int> f(26,0);
    for(auto i : s)f[i]++;
    solve(0,s.length(),f,"");

}


int main(){
    string s;cin >> s;
    vector<int> f(26,0);
    for(auto i : s)f[i-'a']++;
    solve(0,s.length(),f,"");
    cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    for(auto i : v){
        cout<<i<<endl;
    }
}