// WAP to print even number from user input to 0.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the last limit: ";
    cin >> n;
    do
    {
        if (n % 2 == 0)
        {
            cout << n << "\n";
        }
        n--;
    } while (n >= 1);
}