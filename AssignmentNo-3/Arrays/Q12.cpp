/*
12. Write a program to merge two array to third array.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int arr1[1000],arr2[1000],arr3[1000];
    cout<<"Enter the size of first array: ";
    cin>>a;
    cout<<"Enter "<<a<<" elements: ";
    for(int i=0; i<a; i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array: ";
    cin>>b;
    cout<<"Enter "<<b<<" elements: ";
    for(int i=0; i<b; i++)
    {
        cin>>arr2[i];
    }

    int c = a+b;

    for(int i=0; i<a; i++)
    {
    arr3[i] = arr1[i];
    arr3[i+a] = arr2[i];
    }
    cout<<"Third Array : ";
    for(int i=0; i<c; i++)
    {
        cout<<arr3[i]<<" ";
    }
}

/*
Enter the size of first array: 5
Enter 5 elements: 1 2 3 4 5
Enter the size of second array: 5
Enter 5 elements: 6 7 8 9 10
Third Array : 1 2 3 4 5 6 7 8 9 10 
*/