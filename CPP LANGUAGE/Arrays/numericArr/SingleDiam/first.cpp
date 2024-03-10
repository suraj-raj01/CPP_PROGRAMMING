#include <iostream>
using namespace std;
int main()
{
    int a[5];
    a[0] = 5;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    for (int i = 0; i <= 4; ++i)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
    int b[] = {1, 5, 4, 6, 8};
    for (int i = 0; i <= 4; i++)
    {
        cout << b[i] << "\t";
    }
    return 0;
}