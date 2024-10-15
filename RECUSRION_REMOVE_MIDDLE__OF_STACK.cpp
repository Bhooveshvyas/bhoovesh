#include<bits/stdc++.h>
using namespace std;

/*      3 
  3 =   2 size = 4; size 3 // size = 6 size == 4
// */ //1

void remove_middle_element(stack<int> &stck,int sz){
        if(stck.size()==(sz/2)+1){
            stck.pop();
            return ;
        }
        int last = stck.top();
        stck.pop();
        remove_middle_element(stck,sz);
        stck.push(last);
        return;
}

int main(){
    int n;
    cin>>n;
    stack<int> stck;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        stck.push(x);
    }
    int sz = stck.size();
    remove_middle_element(stck,sz);
    while(!stck.empty()){
        cout<<stck.top()<<" ";
        stck.pop();
    }
    return 0;
}