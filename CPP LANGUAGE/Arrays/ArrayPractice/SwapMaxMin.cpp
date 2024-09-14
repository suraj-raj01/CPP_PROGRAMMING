// Write a program to swap max and min element in an array.

#include <iostream>
using namespace std;

class SwapMaxMin
{
public:
    void swapMaxMin(int arr[], int size)
    {
        int max = INT32_MIN;
        int min = INT32_MAX;
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == max)
            {
                arr[i] = min;
            }
            else if (arr[i] == min)
            {
                arr[i] = max;
            }
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    int arr[] = {1, 2, 3, 0, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Original Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter swap max element with min element "<<endl;
    SwapMaxMin object = SwapMaxMin();
    object.swapMaxMin(arr, size);
}

/*
Original Array : 1 2 3 0 4 5 6 
After swap max element with min element 
1 2 3 6 4 5 0 
*/