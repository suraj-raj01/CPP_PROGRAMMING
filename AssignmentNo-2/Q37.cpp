/*
37. Write a program to count one in binary.
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int count=0;
    while(a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }
    cout<<count;
}

/*
Enter the number: 15
4
*/