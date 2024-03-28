/*
Pointer:- Pointer is the variable that store address of another variable.
*/

#include<iostream>
using namespace std;
int main()
{
    /*
    int i=10;
    cout<<i<<","<<&i<<","<<sizeof(i)<<endl;
    char *p;
    cout<<p<<","<<&p<<","<<sizeof(p)<<endl;
    */
    int i=90;
    int *p=&i;
    cout<<"address of i= "<<&i<<endl;
    cout<<"address of p = "<<p<<endl;
    cout<<"value at i = "<<*p<<endl;

    cout<<"-----------------------------"<<endl;

    string name = "SURAJ";
    string *ptr = &name;
    cout<<"address of name: "<<&name<<endl;
    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"value at name: "<<*ptr<<endl;

    cout<<"-----------------------------"<<endl;

    long int value = 32654655;
    long int *ptr1 = &value;
    cout<<"address of value: "<<&value<<endl;
    cout<<"address of ptr1: "<<ptr1<<endl;
    cout<<"value at ptr1: "<<*ptr1<<endl;
}
