#include<iostream>
using namespace std;

int part(int *arr,int low, int high)
{
    int pivot,temp;
    pivot = arr[low];
    int p = low+1;
    int q = high;
    do{
        while(arr[p]<pivot)
        {
            p++;
        }
        while(arr[q]>pivot)
        {
            q--;
        }
        if(p<q)
        {
            temp = arr[p];
            arr[p] = arr[q];
            arr[q] =temp;
        }
    }while(p<q);
    temp = arr[low];
    arr[low] = arr[q];
    arr[q] = temp;
    return q;
}

void BS(int *arr, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot = part(arr,low,high);
        BS(arr,low,pivot-1);
        BS(arr,pivot+1, high);
    }
}

void printArr(int *arr, int size)
{
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
    cout<<"Before Sorting: ";
    printArr(arr,n);
    BS(arr,0,n-1);
    cout<<"\nAfter Sorting: ";
    printArr(arr,n);
}