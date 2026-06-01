#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],item;
    for(int j;j<n;j++)
    {
        cin>>a[j];
    }
  cin>>item;
  int i=0,flag=-1;
  while(flag==-1 && i<n)
  {
    if(a[i]==item)
        flag=i;
    i++;
  }
  if(flag==-1)
    cout<<"not found";
  else
    cout<<"found at "<<flag+1;


}