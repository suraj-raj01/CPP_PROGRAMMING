/*
30. Write a program to check whether a number is Perfect number or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,original,reminder,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    original=n;

    while (original!=0)
    {
        original = n%10;
        for(int i=0; i<original; i++)
        {
            if(i%2==0)
            {
                sum+=i;
            }
        }
        original/=10;
    }
    if(sum==n)
    {
        cout<<"Perfect Number!!";
    }
    else{
        cout<<"Not a Perfect Number!!";
    }
}

/*
Enter the number: 6
Perfect Number!!

OR,

Enter the number: 9
Not a Perfect Number!!
*/