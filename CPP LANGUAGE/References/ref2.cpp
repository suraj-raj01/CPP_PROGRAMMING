/*
Memory Adddress: -
When a variable is created in C++, a memory address is assigned to the variable. And when
we assign a value to the variable, it is stored in this memory address.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    cout << &a << endl;

    string name = "SURAJ KUMAR";
    cout << &name;
}