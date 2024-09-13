// WAP of Fibonacci Series.

#include <iostream>
using namespace std;
class FibonacciSeries
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    FibonacciSeries fs = FibonacciSeries();
    cout<<fs.fib(n);
}