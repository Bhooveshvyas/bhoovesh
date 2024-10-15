#include<bits/stdc++.h>
using namespace std;


class base{
    public:
    string name;
    int rating;
    string tag;
    friend ostream &operator<<(ostream &a,base &obj);
    friend ostream &operator<<(ostream &a,base &obj);
};

ostream operator(ostream a,base &obj){
    a<<obj.name;
}




int main(){

}