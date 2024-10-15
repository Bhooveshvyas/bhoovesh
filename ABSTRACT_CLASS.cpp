#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void func()=0;
};
class B:public A{
    public:
    virtual void func(){
        cout<<"WE ARE IN B!!!..."<<endl;
    }
};
class C:public A{
    public:
    virtual void func(){
        cout<<"WE ARE IN C"<<endl;
    }
};
int main(){
    C obj3;
    obj3.func();
    B obj2;
    obj2.func();
}