#include<bits/stdc++.h>
using namespace std;

void print_map(map<int, string> &m){
    cout<<m.size()<<endl;
    for(auto &it : m){//O(log(N))
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    map<int, string> m;
    m[8] = "eight";
    m.insert({5,"five"});
    m[1] = "one";//O(log(N))
    m[3] = "three";
    m[2] = "two";
    m[2] = "one";
    m.insert({4,"four"});//O(log(N))
    cout<<"BY AUTO ITERATOR"<<endl;

    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<"USING .begin() OPRATORS"<<endl;

    map<int, string> :: iterator i_t ;
    for(i_t = m.begin();i_t!=m.end();i_t++){
        cout<<(*i_t).first<<" "<<(*i_t).second<<endl;
    }


    print_map(m);

    auto it = m.find(1);//O(log(N))//returns a iterator

    //if 3 is present in m then it goes to m.end().
    // if(it==m.end()){
    //     cout<<"NOT PRESENT"<<endl;
    // }
    // else{
    //     cout<<"PRESENT -> "<<endl;
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    if(it!=m.end())
    m.erase(it);//O(log(N))

    print_map(m);
}