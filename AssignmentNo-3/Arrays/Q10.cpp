/*
10. Write a program to count total number of duplicate elements in an array.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,5,4,6,2,3,5,1,2,9,4,1,5,5,1,5,5,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count;
    for(int i=0; i<size; i++)
    {
        count=0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    cout<<"There are "<<count<<" duplicate elements!!";
}

/*
There are 4 duplicate elements!!
*/