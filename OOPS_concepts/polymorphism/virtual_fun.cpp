#include<bits/stdc++.h>
using namespace std;

//////////////correct code
class Animal{
   public:
    virtual void sound(){
        cout<<"hu hu hu"<<endl;
    }
};
class Dog: public Animal{
    public:
    void sound(){
        cout<<"Woof Woof"<<endl;
    }
};
class Cat: public Animal{
    public:
    void sound(){
        cout<<"Meow Meow"<<endl;
    }
};
class Cow: public Animal{
    public:
    void sound(){
        cout<<"Moo Moo"<<endl;
    }
};
////////////wrong code
class Animal_w{
   public:
    void sound(){
        cout<<"hu hu hu"<<endl;
    }
};

class Dog_w: public Animal_w{
    public:
    void sound(){
        cout<<"Woof Woof"<<endl;
    }
};

class Cat_w: public Animal_w{
    public:
    void sound(){
        cout<<"Meow Meow"<<endl;
    }
};

class Cow_w: public Animal_w{
    public:
    void sound(){
        cout<<"Moo Moo"<<endl;
    }
};
int main(){
    Animal_w *ptr;
    vector<Animal_w*> animals;
    animals.push_back(new Dog_w()); 
    animals.push_back(new Cat_w());
    animals.push_back(new Cow_w());
    for(int i=0;i<animals.size();i++){
        ptr=animals[i];
        ptr->sound();
    }
    // complation ke time pe compiler ko ye pata h ki ptr ka type Animal_w h to 
    ///uske according vo phale animal ke passjata h to sound function call ho jata h

    cout<<"-------------------"<<endl;
    Animal *ptr1;
    vector<Animal*> animals1;
    animals1.push_back(new Dog());
    animals1.push_back(new Cat());  
    animals1.push_back(new Cow());
    for(int i=0;i<animals1.size();i++){
        ptr1=animals1[i];
        ptr1->sound();
    }
    // iss case me jab vo fir se sound function ke pas jata h to use virtual keyword 
    // milta h or fir vo function kon sa call karna h use runtime ke lie chod deta h

     
    



}