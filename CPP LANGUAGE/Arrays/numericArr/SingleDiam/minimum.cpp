// WAP to print the minimum value from an array.

#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter the value: ";
    int k = sizeof(a) / sizeof(a[0]);
    int s =  a[0];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        if(s<a[i]){
            s=a[i];
        }
    }
    cout<<"Smallest number: "<<s<<"\t";
    return 0;
}
