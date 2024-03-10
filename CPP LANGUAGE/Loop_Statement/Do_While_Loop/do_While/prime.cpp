// WAP to print prime number

#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    k = n;
    do
    {
        if (n % k == 0)
        {
            count++;
        }
        k--;
    } while (k >= 1);

    if (count == 2)
    {
        cout << "Prime Number";
    }
    else{
    cout << "Not Prime";
    }
}