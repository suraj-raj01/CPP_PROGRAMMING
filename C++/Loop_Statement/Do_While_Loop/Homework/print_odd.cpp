// WAP to print odd number till user input limit.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    do
    {
        if (n % 2 != 0)
        {
            cout << n << "\t";
        }
        n--;
    } while (n >= 1);
}

/*

Enter the number: 16
15      13      11      9       7       5       3       1

*/