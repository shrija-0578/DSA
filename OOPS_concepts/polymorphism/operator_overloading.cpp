#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }
    // syntax for operator overloading
    ///////////////////////////////////
    Complex operator + (Complex const &obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    // although data mem. are private still above can acsses the for obj 
    // q ki apne class k member function h to apne class k private data ko access 
    // kr skte h
    void display(){
        cout<<real<<" + i"<<img;
    }
};

int main(){
// The code snippet demonstrates operator overloading in C++. 
// It shows how the '+' operator can be used to add different types of data, such as
// integers, doubles, and strings. The compiler determines which version of the '+' 
// operator to use based on the types of the operands provided. This is an example of 
// polymorphism, where the same operator behaves differently depending on the context 
// in which it is used.
    int a = 5, b = 10;
    cout<<"Sum of two integers: "<<a+b<<endl;
    cout<<"Sum of two doubles: "<<5.5+10.5<<endl;
    cout<<"Sum of two strings: "<<string("Hello ") + string("World")<<endl;

    // custom operator overloading 
    Complex c1(5, 10), c2(10, 5);
    Complex c3 = c1 + c2;
    cout<<"Sum of two complex numbers: ";
    c3.display();
}
