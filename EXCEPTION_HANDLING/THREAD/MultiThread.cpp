/*
MultiThreads :-

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
    // thread t1(even,10);
    // thread t2(odd,10);
    // t1.join();
    // t2.join();
    cout<<"\nBy";
}
