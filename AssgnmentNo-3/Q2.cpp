/*
2. Write a program to find sum of all array elements.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum is: "<<sum;
}

/*
Enter the size of array: 8
Enter the elements: 4 5 6 2 1 3 8 7
Sum is: 36
*/