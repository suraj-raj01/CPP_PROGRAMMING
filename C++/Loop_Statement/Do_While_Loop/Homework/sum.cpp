// WAP to display the sum of given number up to 1 Using do-while loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int sum = 0;
    do
    {
        sum += n;
        n--;
    } while (n >= 1);
    cout << sum;
}