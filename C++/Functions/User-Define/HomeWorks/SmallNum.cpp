// WAP to print small number of an array using function.

#include<iostream>
using namespace std;

void minimum(int arr[], int size)
{
        for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size-i-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                //swapping
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int k=0; k<size; ++k)
    {
        if(arr[k] == arr[0])
        {
            cout<<"Smallest number is: "<<arr[k];
        }
    }
}

int main()
{
    int arr[] = {5,4,8,3,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    minimum(arr,size);
}
