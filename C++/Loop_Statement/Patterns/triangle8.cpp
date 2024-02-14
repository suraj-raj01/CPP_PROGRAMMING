#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of row: ";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}

/*

Enter the number of row: 3
A 
B C 
D E F 

*/