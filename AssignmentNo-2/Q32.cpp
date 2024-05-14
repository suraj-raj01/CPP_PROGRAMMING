/*
32. Write a program to print Fibonacci series up to n terms.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int first = 0;
    int second = 1;
    int next = 0;
    cout<<first<<"\t";
    cout<<second<<"\t";
    for(int i=1; i<n; i++)
    {
        next = first+second;
        first = second;
        second = next;
        cout<<next<<"\t";
    }
}

/*
Enter the number: 8
0       1       1       2       3       5       8       13      21
*/