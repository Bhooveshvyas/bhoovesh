#include<bits/stdc++.h>
using namespace std;
class A{
    int a=9098,b=90;
    public:
    friend class B;
};
class B{
    public:
    void display(A&t){
        cout<<t.a<<" "<<t.b<<endl;
    }
};
int main(){
    B bj1;
    A obj1;
    bj1.display(obj1);
    return 0;
}