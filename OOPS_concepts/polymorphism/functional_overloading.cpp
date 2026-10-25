#include<bits/stdc++.h>
using namespace std;

class Area{
    public:
    int area(int r){
        return 3.14*r*r;
    }
    int area(int l, int b){
        return l*b;
    }
};

int main(){
    Area a;
    cout<<"Area of circle: "<<a.area(5)<<endl;
    cout<<"Area of rectangle: "<<a.area(5, 10)<<endl;
    return 0;
}

// at compilation time, the compiler will determine which function to call based
//  on the number and type of arguments passed to the function. This is known as function 
//  overloading, which is a form of polymorphism in C++.