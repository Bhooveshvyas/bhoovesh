#include<bits/stdc++.h>
using namespace std;


class temp{
    public:
    int a;
    void operator+(temp &obj){
        cout<<this->a-obj.a<<endl;
    }
};

int main(){
    temp obj1;
    obj1.a=9;
    temp obj2;
    obj2.a=2;
    obj1+obj2;    
}