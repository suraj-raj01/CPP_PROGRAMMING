/*
8. Write a program to count frequency of each element in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,6,5,4,2,1,6,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int frequency=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j]==arr[j+1])
            {
                frequency = arr[j];
            }
        }
    }
}