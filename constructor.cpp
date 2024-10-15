#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
    int PRICE;
    int students;
    public:
    string name;
    // parameter
    Book(int x,int y){
        PRICE=x;
        students=y;
    }

    Book(){
        cout<<"OK"<<endl;
    }

    int TOTAL_COST(){
        return PRICE*students;
    }
};

int main(){
    Book obj1(120,340);
    Book obj2(Book obj2);
    // cout<< obj1.TOTAL_COST()<<endl;
    // cout<<obj2.TOTAL_COST()<<endl;
    
}