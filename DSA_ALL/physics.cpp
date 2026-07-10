// this generate question for pysics river question;
#include<bits/stdc++.h>
using namespace std;
double  ques_1(){
    int r_speed,m_speed; 
    m_speed = rand() % 50 + 50;   
    r_speed = rand() % m_speed;   //r_speed < m_speed(0-r_speed)
    string ques = "Find the angle upstream at which a man must swim from the perpendicular line to the riverbank.\n";
    ques += "River speed = " + to_string(r_speed);
    ques += " m/s, Man speed = " + to_string(m_speed) + " m/s.";
    cout<<ques<<endl;
    return asin((double)r_speed/m_speed);
}

double  ques_2(){
    int r_speed,m_speed; 
    m_speed = rand() % 50 + 50;   
    r_speed = rand() % m_speed;   //r_speed < m_speed(0-r_speed)
    string ques = "A man has To cross a river in the shortest possible distance.find the Effective Velocity when,\n";
    ques += "River speed = " + to_string(r_speed)+" m/s, Man speed = " + to_string(m_speed) + " m/s.";
    cout<<ques<<endl;
    return sqrt((m_speed*m_speed)-(r_speed*r_speed));
}

double  ques_3(){
    int r_speed,m_speed,d; 
    m_speed = rand() % 50 + 50;   
    r_speed = rand() % m_speed;   //r_speed < m_speed(0-r_speed)
    d=rand()%50 +100;
    string ques = "A man has To cross a river in the shortest possible distance.find the Effective time  when,\n";
    ques += "River speed = " + to_string(r_speed)+" m/s, Man speed = " + to_string(m_speed) + " m/s."+" and river width = "+ to_string(d);
    cout<<ques<<endl;
    return (d/(sqrt((m_speed*m_speed)-(r_speed*r_speed))));
}
int main(){
    srand(time(0));
    bool loop=true;
    while(loop)
    {
        cout<<"---------------------"<<endl;
        double ans;
        string units;
        int choice=rand()%3;
        cout<<choice<<endl;
        if(choice==0){
            ans=ques_1();
            units="rads";
        }
        else if(choice==1)
        {
            ans=ques_2();
            units=" m/s";
        }
        else{
            ans=ques_3();
            units=" sec";
        }
        char ch = '\0';
        cout<<"type 'y' to show ans =   ";
        cin>>ch;
        if(ch=='y'|| ch=='Y')
            cout<<ans<<units<<endl;
        cout<<"do you want to exit[y,n]"<<endl;
        char loop_cheack;
        cin>>loop_cheack;
        if(loop_cheack=='y'||loop_cheack=='Y')
            loop=false;

    }
    
}
