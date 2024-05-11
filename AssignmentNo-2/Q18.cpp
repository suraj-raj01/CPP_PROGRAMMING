/*
18. Write a program to find given number is perfect number or not .
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = 1;
    int sum = 0;
    while(a<=n/2)
    {
        if(n%a==0){
        // cout<<a;
        // if(a<n/2-1)
        // {
        //     cout<<" + ";
        // }
        sum+=a;
        }
        a++;
    }
    if(n==sum)
    {
    // cout<<" : ";
    cout<<sum;
    cout<<" : is perfect!!";
    }
    else{
        cout<<"not perfect!!";
    }
}

/*
Enter the number: 28
28 : is perfect!!

OR,

Enter the number: 25
not perfect!!
*/