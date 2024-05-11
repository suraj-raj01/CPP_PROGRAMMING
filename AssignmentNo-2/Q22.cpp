/*
22. Write a program to find all factors of a number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

/*
Enter the number: 18
1 2 3 6 9 18

Enter the number: 56
1 2 4 7 8 14 28 56
*/