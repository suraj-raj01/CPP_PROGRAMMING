// WAP to print table of any number using Recursion Function.

#include <iostream>
using namespace std;

void table(int n, int i)
{
    if (i > 10)
    {
        return;
    }
    cout << n << " * " << i << " : " << n * i << endl;
    table(n, i + 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    table(n, 1);
}