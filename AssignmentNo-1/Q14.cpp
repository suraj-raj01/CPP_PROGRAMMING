/*
14. Write a  program to input angles of a triangle and check whether triangle is valid or not.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first angle: ";
    cin>>a;
    cout<<"Enter the second angle: ";
    cin>>b;
    cout<<"Enter the third angle: ";
    cin>>c;
    if(a+b+c == 180)
    {
        cout<<"Valid";
    }
    else{
        cout<<"not Valid!!";
    }
}

/*
Enter the first angle: 80
Enter the second angle: 70
Enter the third angle: 30
Valid
OR,
Enter the first angle: 60
Enter the second angle: 80
Enter the third angle: 50
not Valid!!
*/