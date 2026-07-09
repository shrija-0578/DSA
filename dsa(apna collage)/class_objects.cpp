#include <bits/stdc++.h>
using namespace std;
class Teacher
{
    private:

    double sal;

    public:

    string name;
    string dept;
    char grade;

        // setter  for private 
        void set_sal(double nsal){
            sal=nsal;
        }
        //getter for private 
        double get_sal(){
            return sal;
        }

        // same Teacher used in diff forms -->polymorphism,consturctor overloading
        //non-parameterized constructor
        Teacher() {
            cout<<"non-parameterized ";
        }
        // Parmiterized constructor
        Teacher(string name,string dept,char grade){
            this->name=name;        //this-> for obj prop
            this->dept=dept;
            this->grade=grade;
        }

        //copy constructor----shallow copy
        Teacher(Teacher &orgObj) {
        cout << "i am custom copy constructor ... \n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->grade = orgObj.grade;
        
        }


        //methods
        void change_dept(string ndept)
        {
            dept=ndept;
            
        }
        void get_info(){
            cout<<name<<"   "<<dept<<"   "<<grade<<endl;
        }
    };

class Student{
    public:
    string name;
    double* cgpaPtr;
    // constructor
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }
    // constructor for deep copy
    Student(Student &obj) {
    this->name = obj.name;
    cgpaPtr = new double;
    //reqires distructors to delete the ptr but IDES delete all memory used automatically...
    *cgpaPtr= *obj.cgpaPtr;
    }
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa :" <<* cgpaPtr << endl;
    }
    // createing own distructor
    ~Student(){
        cout<<endl<<"i run automatically";
        delete cgpaPtr; //prevent memory wasteage!!
    }
};

class Person{
    public:
        string name;
        int age;

    // Person(string name, int age) {
    // this->name = name;
    // this->age = age;

    Person(){

    }
};
class Emp: public Person{
    public:
     int roll_no;

    void getInfo() {
        cout << "name :" << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << roll_no << endl;
    }
        
};

class Polymorphisum{
    public:     //functional Polymorphisum
        void show(int n)
        {
            cout<<"int: "<<n<<endl;
        }
        void show(char ch)
        {
         cout<<"char: "<<ch<<endl;   
        }

};


// int main()
// {   
//     // cout<<"Running";
//     Teacher t0();
//     cout<<endl<<"--------------------------"<<endl;
//     Teacher t1("abc","CS",'A');
//     t1.set_sal(2100);
//     double salary=t1.get_sal();
//     t1.get_info();
//     cout<<salary<<endl;
//     cout<<"-------------------------"<<endl;
//     Teacher t2(t1);         //if copy const not define works by default
//     t2.get_info();}

// int main() {
//     Student s1("rahul kumar", 8.9);
//     Student s2(s1); //"neha kumar"
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();
//     cout<<endl<<"------------------------------"<<endl;
//     s2.name="neha kumar";
//     s2.getInfo();
//     return 0;
// }

// int main(){
//     Emp e1;
//     e1.name = "rahul kumar";
//     e1.age = 21;
//     e1.roll_no =1234;
//     e1.getInfo();
// }

int main(){
    Polymorphisum p1;
    p1.show(28);
    p1.show('A');
}