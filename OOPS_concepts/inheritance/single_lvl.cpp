#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"B ";
    }  
    ~Base(){
        cout<<"~B ";
    }  
    void display(){
        cout<<endl<<"Base class display function"<<endl;
    }
    
};

class Derived: public Base{
    public:
    Derived(){
        cout<<"D ";
    }
    ~Derived(){
        cout<<"~D ";
    }

};

int main(){
    Derived d;
   
    d.display();
}
