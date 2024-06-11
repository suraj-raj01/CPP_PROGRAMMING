#include<iostream>
using namespace std;

void MergeSort(int *arr, int size)
{
    int min;
    cout<<"Befor Sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=1; i<size; i++)
    {
        min = i;
        while(min>0 && arr[min]<arr[min-1])
        {
            int temp = arr[min];
            arr[min] = arr[min-1];
            arr[min-1] = temp;
            min--;
        }
    }
    cout<<"\nAfter Sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,n);
}