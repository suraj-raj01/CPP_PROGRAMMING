/*
Q.2 Write a Program to swap private data members of classes named as cybrom1,
cybrom2 using friend function.
*/

#include <iostream>
using namespace std;

class B;
class A
{
    int cybrom1 = 10;
    friend void swp(A obj1, B obj2);
};

class B
{
    int cybrom2 = 20;
    friend void swp(A obj1, B obj2);
};

void swp(A obj1, B obj2)
{
    obj1.cybrom1 = obj1.cybrom1 + obj2.cybrom2;
    obj2.cybrom2 = obj1.cybrom1 - obj2.cybrom2;
    obj1.cybrom1 = obj1.cybrom1 - obj2.cybrom2;
    cout << "cybrom1: " << obj1.cybrom1 << endl;
    cout << "cybrom2: " << obj2.cybrom2 << endl;
}

int main()
{
    A a;
    B b;
    swp(a, b);
}