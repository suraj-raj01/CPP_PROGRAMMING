// WAP to add the values of an array a=[2,3,4,9,1]
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout << "Enter the value: ";
    int k = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    cout << "Sum is:  ";
    for (int i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }
    cout << sum << "\t";
    return 0;
}