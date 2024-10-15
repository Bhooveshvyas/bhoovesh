#include<bits/stdc++.h>
using namespace std;

void print_vector(vector< pair<string,int> > v)
{
    // cout<<" SIZE = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main(){
    vector< pair<string,int> > v;
    cout<<"NAME        RANK"<<endl;
    v = {{"Bhoovesh    ",1},{"Sorabh      ",2},{"Amrita      ",3}};
    print_vector(v);
}