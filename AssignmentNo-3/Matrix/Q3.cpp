/*
3. Write a program to check whether two matrices are equal or not.
*/

#include<iostream>
using namespace std;
int main()
{
    //first Matrix
    int r1,c1;
    cout<<"Ente the number of row: ";
    cin>>r1;
    cout<<"Enter the number of col: ";
    cin>>c1;
    int arr1[r1][c1];
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    //second Matrix
    int r2,c2;
    cout<<"Ente the number of row: ";
    cin>>r2;
    cout<<"Enter the number of col: ";
    cin>>c2;
    int arr2[r2][c2];
    int count=0;
    int cmp = r2*c2;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    if(r1==r1 && c1==c2)
    {
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                count++;
            }
        }
    }
    if(count==cmp)
    {
        cout<<"Equal";
    }
    else{
        cout<<"not equal";
    }
    }
    else{
        cout<<"not valid";
    }
}

/*
Ente the number of row: 2
Enter the number of col: 2
1 2
2 3
Ente the number of row: 2 
Enter the number of col: 2
1 2
2 3
Equal

OR,

Ente the number of row: 2
Enter the number of col: 2
1 2 
3 2
Ente the number of row: 2
Enter the number of col: 2
1 4
5 2
not equal

OR,

Ente the number of row: 3
Enter the number of col: 2
1 2
2 3
4 5
Ente the number of row: 2
Enter the number of col: 3
1 2 3
3 4 5
not valid
*/