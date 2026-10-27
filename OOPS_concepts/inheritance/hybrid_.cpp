#include<bits/stdc++.h>
using namespace std;

//Hybrid is mix of mulple and hireachial

class Human{
    public:
    Human(){
        cout<<"H"<<endl;
    }
    ~Human(){
        cout<<"~H"<<endl;
    }
};

class Male{
    public:
    Male(){
        cout<<"M"<<endl;
    }
    ~Male(){
        cout<<"~M"<<endl;
    }
};

class Boy:public Human , public Male{
    public:
    Boy(){
        cout<<"B"<<endl;
    }
    ~Boy(){
        cout<<"~B"<<endl;
    }
};

class Female{
    public:
    Female(){
        cout<<"F"<<endl;
    }
    ~Female(){
        cout<<"~F"<<endl;
    }

};

class Girl:public Human,public Female{
    public:
    Girl(){
        cout<<"G"<<endl;
    }
    ~Girl(){
        cout<<"~G"<<endl;
    }
};

int main(){
    Girl g1;
    Boy b1;
}
