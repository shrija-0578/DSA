#include<bits/stdc++.h>
using namespace std;
class cos_queue{
    public:
    int my_size=4;
    int cur_size=0;
    int st=-1;
    int end=-1;
    int ar[4];

    void queue_push(int value)
    {
        if(cur_size==my_size)
        {
         cout<<endl<<"list overflow"<<endl;
         return;   
        }
        if(cur_size==0)
        {
            st=0;
            end=0;
        }
        else
            end=(end+1)%my_size;/////////////////////////////

         ar[end]=value;
         cur_size++;
    }
        int queue_top()
        {        
            if(cur_size==0)
             {
                cout<<endl<<"empty list"<<endl;
                return 0;
             }   
            return ar[st];

        }
        int queue_pop()
        {
            if(cur_size==0){
                cout<<endl<<"empty list"<<endl;
                return 0;

            }
                
            int poped_value=ar[st];
            if(cur_size==1)
            {
                st=-1;
                end=-1;

            }
            else
                st=(st+1)%my_size;
            cur_size--;
            return poped_value;
        }
        void display(){
            cout<<endl<<"------------------------"<<endl;
            for(int i:ar){
                cout<<i<<" ";
            }
        }
    };

int main(){
    cos_queue my_queue; // -->89 2 90 26-->
    my_queue.queue_push(26);
    my_queue.queue_push(90);
    my_queue.queue_push(2);
    my_queue.queue_push(89);
    my_queue.queue_push(6);
    cout<<endl<<my_queue.queue_pop();   // -->89 2 90-->
    cout<<endl<<my_queue.queue_pop();   // -->89 2-->
    cout<<endl<<my_queue.queue_top();   
    my_queue.queue_push(9);             //-->9 89 2-->
    cout<<endl<<my_queue.queue_top();
    my_queue.display();                 //9 90 2 89 actual list cur.
}