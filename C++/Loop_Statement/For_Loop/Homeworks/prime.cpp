// Write a Program to check prime or not.

#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    k = n;
    for (int i = k; k >= 1; i--)
    {
        if (n % k == 0)
        {
            count++;
        }
        k--;
    }
    if (count == 2)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}