#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    cout << "Enter the indexing: ";
    cin >> i;
    try
    {
        if (i > size - 1)
        {
            throw i;
        }
        cout << arr[i] << endl;
    }
    catch (int e)
    {
        cout << "Out of bounce\n";
    }
    cout << "ok";
}