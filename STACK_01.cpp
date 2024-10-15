#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(9);
    st.push(88);
    st.push(67);
    st.push(16);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}