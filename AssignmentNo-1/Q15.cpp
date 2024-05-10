/*
15. Write a  program to input all sides of a triangle and check whether triangle is valid or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first Side: ";
    cin>>a;
    cout<<"Enter the second Side: ";
    cin>>b;
    cout<<"Enter the third Side: ";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"Valid";
    }
    else{
        cout<<"not Valid!!";
    }
}

/*
Enter the first Side: 10
Enter the second Side: 14
Enter the third Side: 20
Valid
OR,
Enter the first Side: 20
Enter the second Side: 10
Enter the third Side: 50
not Valid!!
*/