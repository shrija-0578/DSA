#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string Name;
    int marks_1;
    int marks_2;
    int marks_3;
    string adress;

    Student(string name,int m_1,int m_2,int m_3,string ad)
    {
        Name=name;
        marks_1=m_1;
        marks_2=m_2;
        marks_3=m_3;
    }

    void display(){
        cout<<"name: "<<Name<<endl;
        cout<<" marks are "<<marks_1<<" "<<marks_2<<" "<<marks_3<<endl;
        cout<<"adress "<<adress<<endl;
    }

    int percenatge()
    {
        return ((marks_1+marks_2+marks_3)/3)*100;
    }

};
int main(){
    Student student_data("xyz",55,78,99,"abc drf");
    student_data.display();
    student_data.percenatge();
}