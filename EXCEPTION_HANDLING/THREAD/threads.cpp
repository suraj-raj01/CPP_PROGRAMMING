/*
int main(){} :-
main function is the single thread.

Threads :-
sequence of execution of your program is called Threads. it is also called a 
single task called single threds.
*/

#include<iostream>
using namespace std;
#include<thread>
void even(int a)
{
    for(a; a>=1; --a)
    {
        if(a%2==0)
        {
            cout<<"Even Number: "<<a<<endl;
        }
    }
}
void odd(int a)
{
    for(a; a>=1; --a)
    {
        if(a%2!=0)
        {
            cout<<"Odd Number: "<<a<<endl;
        }
    }
}
int main()
{
    even(20);
    cout<<endl;
    odd(20);
}

/*
Even Number: 20
Even Number: 18
Even Number: 16
Even Number: 14
Even Number: 12
Even Number: 10
Even Number: 8
Even Number: 6
Even Number: 4
Even Number: 2

Odd Number: 19
Odd Number: 17
Odd Number: 15
Odd Number: 13
Odd Number: 11
Odd Number: 9
Odd Number: 7
Odd Number: 5
Odd Number: 3
Odd Number: 1
*/