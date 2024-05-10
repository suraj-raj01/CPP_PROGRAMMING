/*
7. Write a program to find sum of all even numbers between 1 to n.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>=1)
    {
        if(n%2==0)
        {
            sum+=n;
        }
        n--;
    }
    cout<<"Sum is: "<<sum;
}

/*
Enter the number: 10
Sum is: 30
*/