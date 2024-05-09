/*
3. Write a  program to check whether a number is negative, positive or zero.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0)
    {
        cout<<"Positive Number";
    }
    else if(n<0){
        cout<<"Negative Number";
    }
    else{
        cout<<"Zero";
    }
}

/*
Enter the number: -5
Negative Number
OR,
Enter the number: 8
Positive Number
OR,
Enter the number: 0
Zero
*/