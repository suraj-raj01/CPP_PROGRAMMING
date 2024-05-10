/*
6. Write a  program to find sum of all natural numbers between 1 to n.
*/

#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int sum = 0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while (a<=n)
    {
        sum+=a;
        a++;
    }
    cout<<"Total Sum is: "<<sum;
}

/*
Enter the number: 20
Total Sum is: 210
*/