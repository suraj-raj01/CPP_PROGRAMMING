/*
7. Write a program to delete an element from an array at specified position.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,8,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    int idx;
    cout<<"\nEnter the index for delete: ";
    cin>>idx;
    for(int i=0; i<size; i++)
    {
        if(arr[idx]==arr[i])
        {
            continue;
        }
        cout<<arr[i]<<" ";
    }
}

/*
1 5 4 8 7 9 
Enter the index for delete: 3
1 5 4 7 9 
*/