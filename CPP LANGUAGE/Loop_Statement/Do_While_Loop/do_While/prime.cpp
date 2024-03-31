// WAP to print prime number

#include <iostream>
using namespace std;
int main()
{
    int n, t, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    t = n;
    do
    {
        if (n % t == 0)
        {
            count++;
        }
        t--;
    } while (t >= 1);

    if (count == 2)
    {
        cout << "Prime Number";
    }
    else{
    cout << "Not Prime";
    }
}