// Pointer to pointer

#include<iostream>
using namespace std;
int main()
{
    int var = 300;
    int *ptr;
    int **pptr;
    ptr = &var;
    pptr = &ptr;
    cout<<"value of var: "<<var<<endl;
    cout<<"value at ptr: "<<*ptr<<endl;
    cout<<"value at pptr "<<**pptr<<endl;
}

/*
OUTPUT:-

value of var: 300
value at ptr: 300
value at pptr 300
*/