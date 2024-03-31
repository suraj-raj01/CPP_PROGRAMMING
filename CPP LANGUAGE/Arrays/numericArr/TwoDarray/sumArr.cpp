// WAP to add two matrices in array

/*
#include<iostream>
using namespace std;
int main()
{
    int arr1[2][3] = {1,2,3,4,5,6};
    int arr2[2][3] = {6,5,4,3,2,1};
    for(int r=0; r<2; ++r)
    {
        for(int c=0; c<3; ++c)
        {
           cout<<arr1[r][c]+arr2[r][c]<<"  ";
        }
        cout<<"\n";
    }
}

*/

// Sum of two matrix take input by user.

#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of row: ";
    cin>>r;
    cout<<"Enter the number of col: ";
    cin>>c;
    int arr1[r][c];
    int arr2[r][c];
    int sum[r][c];
    cout<<"Enter the element of first matrix: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the element of second matrix: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of first and second Matrix: \n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
    cout<<endl;
    }
}
