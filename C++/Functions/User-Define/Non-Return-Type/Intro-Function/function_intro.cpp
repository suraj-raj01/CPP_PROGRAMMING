/*
For reuse ability of code we have to crate a function.
For specific purpose and it also save our time as well as memory.

There are two types of function.
  1.) Predefined function or inbuilt function
  2.) User define function

Function:- Collection of code/statements is called function.

2.) User define function
there are two types of user define function
    a) return (function which return value)
    b) non-return (function which doesn't return value)

return and non-return function divided into two categories.
    i)  without parameter  --> void show()
    ii) with parameter     --> void sum(int a,int b)

Syntax:-

void function-name()
{
  code / statements
}
*/

// WAP to print hello world using function

/*
#include<iostream>
using namespace std;

void show()
{
    cout<<"Hello World!";
}

int main()
{
    show();
}

*/

// WAP to print hello world 10 times using function

#include<iostream>
using namespace std;

// Without parameter
void show()
{
    cout<<"Hello World!\n";
}

int main()
{
    for(int i=0; i<10; i++)
    {
        // call
        show();
    }
}








