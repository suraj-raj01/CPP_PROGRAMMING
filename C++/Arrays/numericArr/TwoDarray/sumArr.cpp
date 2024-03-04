// WAP to add two matrices in array

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
