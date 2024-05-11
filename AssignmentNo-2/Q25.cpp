/*
25. Write a program to find LCM of two numbers.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int lcm = a>b?a:b;
    while(true)
    {
        if(lcm%a==0 && lcm%b==0){
            cout<<lcm;
            break;
        }
        lcm++;
    }
}

/*
Enter the first number: 72
Enter the second number: 120
360
*/