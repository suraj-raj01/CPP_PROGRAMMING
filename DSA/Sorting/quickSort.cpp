/*
Quick Sort :
*/

#include<iostream>
using namespace std;

int partition(int *arr,int low, int high)
{
    int tem;
    int pivot = arr[low];
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
            tem = arr[p];
            arr[p] = arr[q];
            arr[q] = tem;
        }
    }while(p<q);
    tem = arr[low];
    arr[low] = arr[q];
    arr[q] = tem;
    return q;
}

void QuickSort(int *arr, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot = partition(arr,low,high);
        QuickSort(arr,low,pivot-1);
        QuickSort(arr,pivot+1,high);
    }
}
void printArray(int *arr,int size)
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
    printArray(arr,n);
    QuickSort(arr,0,n-1);
    cout<<"\nAfter Quick Sort Apply: \n";
    printArray(arr,n);
}    