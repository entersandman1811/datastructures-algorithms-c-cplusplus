#include<iostream>
using namespace std;

void foo(int &v)
{
    v = 6;
}
 
int main()
{
    int value = 5;
 
    cout << "value = " << value << '\n';
    foo(value);
    cout << "value = " << value << '\n';
    return 0;
}
