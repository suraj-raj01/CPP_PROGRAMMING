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
}
