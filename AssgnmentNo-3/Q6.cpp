/*
6. Write a program to copy all elements from an array to another array
*/

#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {2,5,4,6,9,8,7};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[size];
    cout<<"arr1 elements: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
        arr2[i] = arr1[i];
    }
    cout<<"\nAfter copied arr1 element into arr2:\n";
    cout<<"arr2 elements: ";
    for(int j=0; j<size; j++)
    {
        cout<<arr2[j]<<" ";
    }

}

/*
arr1 elements: 2 5 4 6 9 8 7 
After copied arr1 element into arr2:
arr2 elements: 2 5 4 6 9 8 7 
*/