#include<bits/stdc++.h>
using namespace std;

#define N = 1e5;

inline int temp(){
    return 7;
}

int t(){
    return 9;
}
class Unkown;
class Bhoovesh{
    private:
    int money_i_have = 100;
    friend void Amir(Bhoovesh,Unkown);
};

class Unkown{
    private:
    int money_he_have = 200;
    friend void Amir(Bhoovesh,Unkown);
};

void Amir(Bhoovesh r1,Unkown r2){
    cout<<r1.money_i_have+r2.money_he_have;
}

int main(){
    Bhoovesh obj1;
    Unkown obj2;
    Amir(obj1,obj2);
}