/*
1. Write a program to print all negative elements in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,-5,4,-2,5,6,-7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i]<<" ";
        }
    }
}

/*
-5 -2 -7 
*/