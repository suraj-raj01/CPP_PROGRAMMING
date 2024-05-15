/*
29. Write a program to check whether a number is Armstrong number or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,original,sum=0,reminder;
    cout<<"Enter the number: ";
    cin>>n;
    original = n;
    while (original!=0)
    {
        reminder = original%10;
        sum += reminder*reminder*reminder;
        original/=10;
    }
    if(sum==n)
    {
        cout<<"Armstrong Number!!";
    }
    else{
        cout<<"Not Armstrong Number!!";
    }
}

/*
Enter the number: 371
Armstrong Number!!

OR,

Enter the number: 154
Not Armstrong Number!!
*/