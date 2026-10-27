#include<bits/stdc++.h> 
using namespace std; 

class human{ 
    int addhar_id; 
protected: 
    string name; 
    int age; 
public: 
    human(){ 
        addhar_id = 0; 
        name = ""; 
        age = 0; 
    } 
    human(int id, string n, int a){ 
        addhar_id = id; 
        name = n; 
        age = a; 
    } 
    void display(){ 
        cout<<"--------------------"<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
        cout<<"Addhar ID: "<<addhar_id<<endl; 
        cout<<"--------------------"<<endl; 
    } 
}; 

class student: public human{ 
    int roll_no; 
public: 
   
    student(int id, string n, int a, int r) : human(id, n, a) { 
        roll_no = r; 
    } 
    // student(int id, string n, int a, int r){ 
    //     addhar_id = id;
    //     name = n; 
    //     age = a;
    //     roll_no = r; 
    // } cant be as addhar_id, name and age are private members of 
    // human class and cannot be accessed directly in derived class student.
    void display(){ 
        cout<<"--------------------"<<endl; 
        cout<<"Student Details: "<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
        cout<<"Roll No: "<<roll_no<<endl; 
        cout<<"--------------------"<<endl; 
    } 
}; 

class teacher: public human{ 
    string subject; 
public: 
   
    teacher(int id, string n, int a, string s) : human(id, n, a) { 
        subject = s; 
    } 
    void display(){ 
        cout<<"--------------------"<<endl; 
        cout<<"Teacher Details: "<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
        cout<<"Subject: "<<subject<<endl; 
        cout<<"--------------------"<<endl; 
    } 
}; 

int main(){ 
    student s1(123, "John", 20, 101); 
    teacher t1(456, "Smith", 35, "Math"); 
    
    s1.display(); 
    t1.display(); 
    
    return 0; 
}
