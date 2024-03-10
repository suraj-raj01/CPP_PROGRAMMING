// WAP to generate square of each number of an array.

#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter the value: ";
    int k = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    cout << "Stored value   ";
    for (int i = 0; i < k; i++)
    {
        cout<<a[i]*a[i]<<"\t";
    }
    return 0;
}
