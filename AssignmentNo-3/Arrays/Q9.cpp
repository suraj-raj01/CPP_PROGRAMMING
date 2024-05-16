/*
9. Write a program to print all unique elements in the array.
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
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(arr[i]!=arr[j+1])
            {
                continue;
            }
        }
    }
}