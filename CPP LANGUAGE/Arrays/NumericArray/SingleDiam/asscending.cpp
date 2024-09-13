// WAP to print array in ascending array.


#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,6,3,2};
    int size  = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size-i-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k=0; k<size; k++)
    {
        cout<<arr[k]<<"  ";
    }
}
