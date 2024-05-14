/*
15. Write a program to search an element in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int search,s;
    cout<<"Enter the number for searching: ";
    cin>>search;
    for(int i=0; i<n; i++)
    {
        if(search==arr[i])
        {
            s=1;
        }
    }
    if(s==1)
    {
        cout<<"Number is Present!!";
    }
    else{
        cout<<"Number is not Present!!";
    }
}

/*
Enter the size of an array: 10
Enter 10 numbers: 1 2 3 4 5 6 7 8 9 1
Enter the number for searching: 1
Number is Present!!
*/