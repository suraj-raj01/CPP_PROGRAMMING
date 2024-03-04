// WAP to print table 2-10 of an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {2,3,4,5,6,7,8,9};
    for(int r=0; r<8; ++r)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<arr[r]<<" * "<<i<<" : "<<arr[r]*i<<"\n";
        }
    cout<<"\n";
    }
}
