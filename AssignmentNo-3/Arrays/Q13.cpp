/*
13. Write a program to find reverse of an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"After reverse array: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
}

/*
Enter the size of an array: 8
Enter 8 elements: 8 7 6 5 4 3 2 1
After reverse array: 1 2 3 4 5 6 7 8 
*/