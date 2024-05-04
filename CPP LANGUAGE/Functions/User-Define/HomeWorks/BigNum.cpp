// WAP to print Big number of an array using function.

#include <iostream>
using namespace std;

void BigNum(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0; k < size; ++k)
    {
        if (arr[k] == arr[0])
        {
            cout << "Big Number of an array: " << arr[k];
        }
    }
}

int main()
{
    int arr[] = {1, 6, 7, 4, 5, 3, 2, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    BigNum(arr, size);
}
