/*
Q.5 Write a program to handle the exception of double and float value.
*/

#include<iostream>
using namespace std;
int main()
{
    try
    {
        // throw  1.23f;
        throw  1.35;
    }
    catch(float f)
    {
        cout<<"Float type value: "<<f;
    }
    catch(double d)
    {
        cout<<"Double type value: "<<d;
    }
}