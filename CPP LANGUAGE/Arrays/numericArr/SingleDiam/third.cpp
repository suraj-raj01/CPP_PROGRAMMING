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
        if(a[i]%2==0)
        {
            cout << a[i] << "\t";
        }
    }
    return 0;
}
