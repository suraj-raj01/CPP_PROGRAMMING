/*
35. Write a program to find Factorial of given number
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    for(int i=n; i>0; i--)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" = "<<fact;
}

/*
Enter the number: 5
Factorial of 5 = 120
*/