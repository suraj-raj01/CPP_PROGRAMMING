#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of row: ";
    cin >> r;
    int num = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}

/*

Enter the number of row: 3
1 
2 3 
4 5 6 

*/