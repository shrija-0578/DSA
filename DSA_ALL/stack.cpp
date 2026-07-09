#include<bits/stdc++.h>
using namespace std;
class Stack_cos{
    public:
    int top=-1;
    int ar[10];

    void stack_push(int value){
        top++;
        ar[top]=value;
    }
    int stack_pop(){
        if(top==-1)
            return NULL;
        int poped_val=ar[top];
        top--;
        return poped_val;
    }
    int stack_top(){
        if(top==-1)
            return NULL;
        return ar[top];
    }
    int stack_size()
    {
        return top+1;
    }
};
int main(){
    Stack_cos my_stack;
    my_stack.stack_push(5);
    my_stack.stack_push(95);
    my_stack.stack_push(67);
    my_stack.stack_push(12);
    
    cout<<my_stack.stack_size()<<endl;
    cout<<my_stack.stack_pop()<<endl;
    cout<<my_stack.stack_top()<<endl;
    cout<<my_stack.stack_pop()<<endl;
    cout<<my_stack.stack_pop()<<endl;
    cout<<my_stack.stack_pop()<<endl;
    cout<<my_stack.stack_pop()<<endl;
    cout<<my_stack.stack_pop()<<endl;

}