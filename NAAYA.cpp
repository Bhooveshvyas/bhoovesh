
// // int Contestant::output_highest_rated()
// // {
// //     ifstream file_obj;
// //     file_obj.open("Input.txt", ios::in);
// //     Contestant obj;
// //     file_obj.read((char*)&obj, sizeof(obj));
// //     int max = 0;
// //     string Highest_rated;
// //     while (!file_obj.eof())
// //      {
       
// //         if (obj.Ratings > max)
// //         {
// //             max = obj.Ratings;
// //             Highest_rated = obj.Name;
// //         }      
// //         file_obj.read((char*)&obj, sizeof(obj));
// //     }
// //      file_obj.close();    
// //      cout << Highest_rated;
// //     return 0;
// // }

/*
#include<bits/stdc++.h>
using namespace std;

 class contestant{
     public:
     string name;
     int age;
     int rating;
     int input();
     int output();
};

 int contestant::input(){
     ofstream object1;
     object1.open("temp.txt",ios::app);
     contestant obj1;
     obj1.age=18;
     obj1.name="Ashray";
     obj1.rating=1886;
     object1.write((char*)&obj1,sizeof(obj1));
     contestant obj2;
     obj2.age=20;
     obj2.name="Ronni";
     obj2.rating=1156;
     object1.write((char*)&obj2,sizeof(obj2));
     object1.close();
     return 0;
}

int contestant::output(){
    
    return 0;
}
int main(){
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void temp(){
        cout<<"HUM BASE CLASS M HAI!!!......."<<endl;
    }
    void helper(){
        cout<<"WE ARE IN HELPER OF BASE CLASS!!!!!....."<<endl;
    }
};

class Derived : public Base{
    public:
    void temp(){
        cout<<"HUM DERIVED CLASS M HAI!!!......."<<endl;
    }
    void helper(){
        cout<<"WE ARE IN HELPER OF DERIVED CLASS!!!!!....."<<endl;
    }
};


int main(){
    Derived obj;
    obj.temp();//method oveerriding;

    Base* bptr;
    bptr = &obj;
    bptr->helper();//IF NOT VIRTUAL THEN SEE WHOSE POINT IS IT.
    bptr->temp();//AGR FUNCTION VIRTUAL HAI TOH ADDRESS DEKHENGE KIS CLASS KE POINTER KA H.

}
// hum derived m h 
// we are in base class
// hum derived class m h