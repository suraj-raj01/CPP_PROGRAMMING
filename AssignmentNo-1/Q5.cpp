/*
5. Write a  program to check whether a number is even or odd
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is Even number";
    }
    else{
        cout<<n<<" is Odd number!";
    }
}

/*
Enter the number: 6
6 is Even number
*/