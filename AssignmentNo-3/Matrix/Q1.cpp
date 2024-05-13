/*
1. Write a program to add two matrices.
*/

#include<iostream>
using namespace std;
int main()
{
    int row1,col1;
    cout<<"Enter the elements for first matrix: \n";
    cout<<"Enter the number of rows: ";
    cin>>row1;
    cout<<"Enter the number of col: ";
    cin>>col1;
    int matrix1[row1][col1];
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    cout<<"\nFirst Matrix Data\n";
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }   

    int row2,col2;
    cout<<"\nEnter the elements for Second matrix: \n"; 
    cout<<"Enter the number of rows: ";
    cin>>row2;
    cout<<"Enter the number of col: ";
    cin>>col2;
    int matrix2[row2][col2];
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            cin>>matrix2[i][j];
        }
    }

    cout<<"\nSecond Matrix Data\n";
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<"\n";
    }

    int addition[row1][col2];
    if(row1==row2 && col1==col2)
    {
    cout<<"\nAfter Addition of first and Second Matrix: \n\n";
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                addition[i][j] = matrix1[i][j]+matrix2[i][j];
            }
        }
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cout<<addition[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Additon is not possible!!!";
    }
}

/*

Enter the elements for first matrix: 
Enter the number of rows: 3
Enter the number of col: 3
1 2 3 
4 5 6
7 8 9

First Matrix Data
1 2 3 
4 5 6 
7 8 9 

Enter the elements for Second matrix: 
Enter the number of rows: 3
Enter the number of col: 3
9 8 7
6 5 4
3 2 1

Second Matrix Data
9 8 7
6 5 4
3 2 1

After Addition of first and Second Matrix:

10 10 10
10 10 10
10 10 10

*/