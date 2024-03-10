#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int k = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<k; ++i)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}