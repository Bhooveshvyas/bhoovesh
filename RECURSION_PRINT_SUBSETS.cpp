#include<bits/stdc++.h>
using namespace std;

void print_subsets(string input,string output){
    if(input.length() == 0){
        cout<<output<<" ";
        return ;
    }
    string op1 = output;
    string op2 = output;
    op2.push_back(input[0]);
    input.erase(input.begin()+0);
    print_subsets(input,op1);
    print_subsets(input,op2);
    return ;

}

int main(){
    string s;cin>>s;
    string e="";
    print_subsets(s,e);
// }

// CODE FOR UNIQUE SUBSETS
// #include<bits/stdc++.h>
// using namespace std;

// vector<string>v;
// set<string> st;
// void print_subsets(string input,string output){
//     if(input.length() == 0){
//         v.push_back(output);
//         st.insert()
//         return ;
//     }
//     string op1 = output;
//     string op2 = output;
//     op2.push_back(input[0]);
//     input.erase(input.begin()+0);
//     print_subsets(input,op1);
//     print_subsets(input,op2);
//     return ;

// }

// int main(){
//     string s;cin>>s;
//     string e="";
//     print_subsets(s,e);
//     set<string> st;
//     for(auto i : v){
//         st.insert(i);
//     }
//     for(auto i : st)cout<<i<<endl;
// }