#include<bits/stdc++.h>
using namespace std;
//multiple base classes--- one derived
class Base_1{
    public:
    Base_1(){
        cout<<"B1  ";
    }
    ~Base_1(){
        cout<<"~B1  ";
    }
};

class Base_2{
    public:
    Base_2(){
        cout<<"B2  ";
    }
    ~Base_2(){
        cout<<"~B2  ";
    }
};
// call depends on the order mentioned here
class Derived: public Base_1, public Base_2{
    public:
    Derived(){
        cout<<"D  ";
    }
    ~Derived(){
        cout<<"~D  ";
    }
};

int main(){
    Derived d;
}