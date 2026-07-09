#include<bits/stdc++.h>
using namespace std;
class cos_queue{

};

int main(){
    int my_size=10;
    int cur_size=0;
    int st=-1;
    int end=-1;
    int ar[10];

    void queue_push(int value){
        if(cur_size==size)
            cout<<endl<<"list overflow"<<endl;
        if(cur_size==0)
        {
            st=-;
            end=0;
            int ar[10];
        }
        else{
            end=(end+1)%size;
            ar[emd]=value;
            cur_size++;
            
        }
        int my_top()
        {        
            if(cur_size==size);
            cout<<endl<<"empty list"<<endl
                return NULLL;
            return ar[st];

        }
        int pop()
        {
            if(cur_size==size);
            cout<<endl<<"empty list"<<endl
            int poped_value=ar[st];
            if(cur_size==1)
            {
                st=-1;
                end=-1;

            }
            else{
                st=(st+1)%size;
                
            }
        }
    }

}