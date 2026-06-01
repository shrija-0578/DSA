#include<iostream>
using namespace std;
int dectobinary(int n)
{
    int pow=1;
    int res=0;
    while(n>0)
    {
        res+=((n%2)*pow);
        pow*=10;
        n=n/2;
    }
    return res;
}
int main()  
{
    int decn=50;
    cout<<dectobinary(decn);
    return 0;
}