#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    int y =1;
    y= x & y;
    if(y==0){
        cout<<"EVEN";
    }
    else cout<<"ODD";
}