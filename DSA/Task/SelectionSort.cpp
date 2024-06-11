#include<iostream>
using namespace std;

void SelectionSort(int *arr, int size)
{
    cout<<"Befor Sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    int chotu;
    for(int i=0; i<size; i++)
    {
        chotu = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[chotu]>arr[j])
            {
                chotu = j;
            }
        }
        if(arr[chotu]!=arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[chotu];
            arr[chotu] = temp;
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
    SelectionSort(arr,n);
}