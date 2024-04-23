/*
Exception Handling :-
1) Exception is an abnormal situation during program execution .
2) To avoid it we use exception handler

There are three types of Handler
1)Try()
2)Throw()
3)Catch()
*/

/*
Syntax :-
try
{
if(condition)
{
    throw variable;
}
code (statement);
}
catch(datatype variable)
{
    statement;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout << a / b << endl;
    }
    catch (int e)
    {
        cout << "Denominator should not be zero\n";
    }
    cout << "okay";
}