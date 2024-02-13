// WAP to Print ASCII value.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 255; i++)
    {
        // cout<<i<<" = "<<char(i)<<"\n";
        cout << i << " = " << char(i) << "\t";
    }
    cout << "\n";
    for (int cy = 'a'; cy <= 'e'; cy++)
    {
        cout <<(int)cy<< "\n";
    }
}