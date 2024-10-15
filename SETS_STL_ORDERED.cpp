#include<bits/stdc++.h>
using namespace std;

void print(set<string> s){
    for(auto &it : s){
        cout<<(it)<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");
    s.insert("def");//O(log(n));
    s.insert("ghi");
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    // auto it = s.find("def");//O(log(n));
    // if(it!=s.end()){
    //     s.erase(*it);
    // }else   cout<<"NOT PRESENT"<<endl;
    
        s.erase("abc");
    print(s);
}