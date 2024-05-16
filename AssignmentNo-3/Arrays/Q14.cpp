/*
14. Write a program to put even and odd elements of array in two separate array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // for even number;
    cout<<"Even elements: ";
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    // for odd number
    cout<<"\n";
    cout<<"Odd elements: ";
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}

/*
Enter the size of an array: 10
Enter the elements: 5 2 3 6 1 4 7 8 9 10
Even elements: 2 6 4 8 10 
Odd elements: 5 3 1 7 9 
*/