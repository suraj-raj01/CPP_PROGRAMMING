// WAP to print square of an array using 2D array.

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<3; ++c)
        {
            cout<<"Square of "<<arr[r][c]<<" : "<<arr[r][c]*arr[r][c]<<"\n";
        }
    }
}
