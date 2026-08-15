#include <bits/stdc++.h>
using namespace std;

void call_by_value(int x)
{
    x++;
    cout << "Inside call by value: " << x << endl;
}


void call_by_ref(int &x)
{
    x++;
    cout << "Inside call by reference: " << x << endl;
}


void call_by_address(int *x)
{
    (*x)++;
    cout << "Inside call by address: " << *x << endl;
}

int main()
{
    int y = 33;

    cout << "Initial value in main: " << y << endl;

    cout << "Call by Value";
    call_by_value(y);
    cout << "After function call: " << y << endl;

    cout << "Call by Reference";
    call_by_ref(y);
    cout << "After function call: " << y << endl;

    cout << "Call by Address";
    call_by_address(&y);
    cout << "After function call: " << y << endl;

    return 0;
}