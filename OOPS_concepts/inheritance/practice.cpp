#include<bits/stdc++.h>
using namespace std;

class Human{
   public:
    string name;
    int age;
    Human(){
        cout<<"#H_default"<<endl;
    };
    Human(string n, int a){
        name = n;
        age = a;
        cout<<"#H"<<endl;
    }
    ~Human(){
        cout<<"#~H"<<endl;
    }
    void display(){
        cout<<"--------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

class Teacher: public Human{
    string subject;
    public:
    Teacher(string n, int a, string s){
        name = n;
        age = a;
        subject = s;
        cout<<"#T"<<endl;
    }
    ~Teacher(){
        cout<<"#~T"<<endl;
    }
    void display(){
        cout<<"--------------------"<<endl;
        cout<<"Teacher Details: "<<endl;
        Human::display();
        cout<<"Subject: "<<subject<<endl;
        cout<<"--------------------"<<endl;
    }
};


class Student: public Human{
    int roll_no;
    public:
    Student(string n, int a, int r){
        name = n;
        age = a;
        roll_no = r;
        cout<<"#S"<<endl;
    }
    ~Student(){
        cout<<"#~S"<<endl;  
    }
    void display(){
        cout<<"--------------------"<<endl;
        cout<<"Student Details: "<<endl;
        Human::display();
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"--------------------"<<endl;
    }
};
int main(){
    Teacher t("John", 35, "Mathematics");
    Student s("Alice", 20, 101);
    t.display();
    s.display();
}