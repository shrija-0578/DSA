#include<bits/stdc++.h>
using namespace std;
// single base class--- multiple derived
class Base{
    public:
    Base(){
        cout<<"B ";
    }
    ~Base(){
        cout<<"~B ";
    }
};

class Derived_1: public Base{
    public:
    Derived_1(){
        cout<<"D1 ";
    }
    ~Derived_1  (){
        cout<<"~D1 ";
    }
};

class Derived_2: public Base{
    public:
    Derived_2(){
        cout<<"D2 ";
    }
    ~Derived_2(){
        cout<<"~D2 ";
    }
};

int main(){
    Derived_1 d1;
    cout<<endl;
    Derived_2 d2;
    cout<<endl;
         
}