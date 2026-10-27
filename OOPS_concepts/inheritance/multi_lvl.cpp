#include<bits/stdc++.h>
using namespace std;


class A{
    
    public:
    A(){
        cout<<"A ";
    }  
    ~A(){
        cout<<"~A ";
    }  
};

class B: public A{
    public:

    B(){
        cout<<"B ";
    }
    ~B(){
        cout<<"~B ";
    }
};

class C: public B{
    public:
    B b1;
    C(){
        cout<<"C ";
    }
    ~C(){
        cout<<"~C ";
    }
};

int main(){
    C c;
}
// A B A B C ~C ~B ~A ~B ~A 
// base(A) middle(B) derived(C)
// A (B A) C ~C (B A) ~B ~A
// since B is called before constructor of C,(A B )is called before c