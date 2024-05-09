/*
4. Write a program to check whether a number is divisible by 5 and 11 or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%5 == 0 && n%11 ==0)
    {
        cout<<"Divisible!!";
    }
    else{
        cout<<"Not Divisible!!";
    }
}

/*
Enter the number: 55
Divisible!!
OR,
Enter the number: 45
Not Divisible!!
*/