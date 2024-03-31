// WAP to print the transpose of a matrix.

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of row: ";
    cin >> r;
    cout << "Enter the number of col: ";
    cin >> c;
    int arr1[r][c];
    int transp[r][c];
    // input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr1[i][j];
        }
    }

    // Transpose Matrix
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            transp[j][i] = arr1[i][j];
        }
    }

    // output
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout<<transp[i][j]<<"\t";
        }
        cout<<"\n";
    }
}