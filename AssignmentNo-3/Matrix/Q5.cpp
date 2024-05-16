/*
5. Write a C program to find transpose of a matrix.
*/

#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of col: ";
    cin>>c;
    int arr[r][c];
    int trnasp[r][c];
    cout<<"Enter element of "<<r<<"X"<<c<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            trnasp[i][j] = arr[j][i];
        }
    }
    cout<<"Transpose Matrix: \n";
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<trnasp[i][j]<<" ";
        }
        cout<<"\n";
    }
}

/*
Enter the number of row: 3
Enter the number of col: 4
Enter element of 3X4
1 2 3 4
2 3 4 5
3 4 5 6
Transpose Matrix: 
1 2 3 
2 3 4 
3 4 5 
4 5 6 
*/