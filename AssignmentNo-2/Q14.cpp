/*
14. Write a program to calculate sum of digits of a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0)
    {
        sum += n%10;
        n = n/10;
    }
    cout<<"Sum of digits: "<<sum;
}

/*
Enter the number: 645615
Sum of digits: 27
*/