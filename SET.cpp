#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
    // p = make_pair(65 , "A");initialisation of a pair (1)
    p = {65,"A"};
    pair<int,int> p_array[5];
    p_array[0] = {1,2};
    p_array[1] = {2,2};
    p_array[2] = {3,2};
    p_array[3] = {4,2};
    p_array[4] = {5,2};
    swap(p_array[0],p_array[1]);
    for(int i=0;i<5;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<p.first<<" "<<p.second;
}