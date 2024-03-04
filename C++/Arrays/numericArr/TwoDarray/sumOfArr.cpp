// WAP to print sum of an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<3; ++c)
        {
           // if(arr[r][c]%2==0){
            sum+=arr[r][c];
           // }
        }
    }
    cout<<sum;
}
