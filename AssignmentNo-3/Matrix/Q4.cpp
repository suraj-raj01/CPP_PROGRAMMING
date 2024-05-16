/*
4. Write a C program to find sum of each row and column of a matrix.
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

    cout<<"Enter the elements: ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Sum of Each Row: \n";
    for(int i=0; i<r; i++)
    {
        int sumRow=0;
        for(int j=0; j<c; j++)
        {
            sumRow+=arr[i][j];
        }
        cout<<sumRow<<"\n";
    }
}

/*
Enter the number of row: 3
Enter the number of col: 3
Enter the elements: 
6 8 5
2 3 5
4 7 6
Sum of Each Row: 
19
10
17
*/