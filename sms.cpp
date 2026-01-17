#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
// #include<stdlib.h>
// #include<cstdlib>
#include<vector>
using namespace std;
class student
{
    private:
    string name; 
    int adm_no;
    char section;
    public:
    void insert();
    void display();
    void search();
};
void student::insert()
{
    system("cls");
    fstream file;
    cout<<endl<<"\t-----------------------------------------------------------------------"<<endl;
    cout<<endl<<"\t------------------------------Enter details----------------------------";
    cout << "\n\tEnter name: ";
        cin >> name;
        cout << "\tEnter Admission No: ";
        cin >> adm_no;
        cout << "\tEnter Section: ";
        cin >> section;

        // Writing to file immediately
        ofstream outFile("students.txt", ios::app); 
        outFile << name << " " << adm_no << " " << section << endl;
        outFile.close();
        
        cout << "\n\tRecord saved to file!" << endl;;
    
}
void student::display()
{
    system("cls");
    fstream file;
    string line;
    cout<<endl<<"\t-----------------------------------------------------------------------"<<endl;
    cout<<endl<<"\t------------------------------Student Records--------------------------"<<endl;
    ifstream inFile("students.txt");
    if (!inFile) {
        cout << "\n\tNo records found!" << endl;
        return;
    }
    while (getline(inFile, line)) {
        cout << "\t" << line << endl;
    }
    inFile.close();
}
void student::search()
{
    system("cls");
    fstream file;
    int adm_no_search;
    string line;
    bool found = false;
    cout<<endl<<"\t-----------------------------------------------------------------------"<<endl;
    cout<<endl<<"\tenter admission no to search record: ";
    cin>>adm_no_search;
    ifstream inFile("students.txt");
    if(!inFile)
    {
        cout<<"\n\tNo records found!"<<endl;
        return;
    }
    else
    {
        while(getline(inFile,line))
        {
            string n;
            int adm;
            char sec;
            stringstream ss(line);
            ss>>n>>adm>>sec;
            if(adm==adm_no_search)
            {
                cout<<endl<<"\tRecord found:"<<endl<<"\tName = "<<n<<endl<<"\tAdmission No = "<<adm<<endl<<"\tSection = "<<sec<<endl;
                found = true;
            }
        }
        if(!found)
            {
                cout<<endl<<"\tRecord not found at Admission No: "<<adm_no_search<<endl;
            }
    }
    


}
// ofstream (output): Use this to "send" data from your code to a file.
// ifstream (input): Use this to "read" data from a file into your code.
// ios::app: This is a flag that tells C++, "Don't delete the old file, just add (append) the new student at the bottom."
int main()
{
    int ch;
    bool stat=true;
    student s;
    while(stat)
    {
        cout<<endl<<"\t\t\tStudent management system "<<endl;
        cout<<"\t\t\t----------------------------";
        cout<<endl<<"\t\t\t1.enter a record"<<endl<<"\t\t\t2.display record"<<endl<<"\t\t\t3.search record"<<endl<<"\t\t\t4.exit"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
        {
            s.insert();
            break;
        }
        case 2:
        {
            s.display();
            break;
        }
        case 3:
        {
            s.search();
            break;
        }
        
        case 4:
            {
            cout<<endl<<"Exiting...";
            stat=false;
            break;
        }
        
        default:
            {
                cout<<"invalid choice"<<endl;
                break;
            }
           
        }

    }
    return 0;
}