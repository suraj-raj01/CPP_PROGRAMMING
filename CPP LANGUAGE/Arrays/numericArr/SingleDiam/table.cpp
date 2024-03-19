// WAP to print table 2-10 of an array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);
    // input

    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    for (int r = 0; r < size; ++r)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << arr[r] << " * " << i << " : " << arr[r] * i << "\n";
        }
        cout << "\n";
    }
}
